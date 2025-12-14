#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22965;
unsigned short var_7 = (unsigned short)18487;
int zero = 0;
long long int var_19 = -3431097414649373565LL;
unsigned long long int var_20 = 17304914685518502078ULL;
unsigned char var_21 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
