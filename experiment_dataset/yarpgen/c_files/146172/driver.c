#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12901368764696530663ULL;
unsigned char var_3 = (unsigned char)108;
unsigned long long int var_6 = 324821446818679033ULL;
int zero = 0;
signed char var_14 = (signed char)-121;
signed char var_15 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
