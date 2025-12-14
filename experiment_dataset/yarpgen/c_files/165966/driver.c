#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6186942621862178559ULL;
int var_14 = 1567986810;
int zero = 0;
unsigned short var_17 = (unsigned short)9069;
unsigned short var_18 = (unsigned short)37801;
unsigned short var_19 = (unsigned short)10511;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
