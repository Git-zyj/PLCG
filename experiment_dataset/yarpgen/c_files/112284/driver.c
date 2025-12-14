#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10432254891761650601ULL;
unsigned int var_15 = 4115547350U;
unsigned long long int var_18 = 9981305964426499252ULL;
unsigned char var_19 = (unsigned char)173;
int zero = 0;
long long int var_20 = -7757284250334998567LL;
long long int var_21 = -1562065696436586285LL;
short var_22 = (short)-25608;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
