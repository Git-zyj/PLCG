#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14845609707051153215ULL;
long long int var_3 = 1446440705100158549LL;
signed char var_5 = (signed char)122;
short var_6 = (short)-8881;
long long int var_7 = 7927178627463452620LL;
unsigned int var_10 = 3205844448U;
signed char var_12 = (signed char)-16;
long long int var_15 = -3680491851412248083LL;
int zero = 0;
unsigned char var_16 = (unsigned char)140;
int var_17 = 246065854;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
