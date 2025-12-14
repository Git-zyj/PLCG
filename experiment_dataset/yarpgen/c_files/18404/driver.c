#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11225808864775807474ULL;
unsigned short var_1 = (unsigned short)19131;
unsigned short var_2 = (unsigned short)64928;
int var_7 = -639316724;
long long int var_8 = -1257104386479635771LL;
signed char var_9 = (signed char)-100;
signed char var_11 = (signed char)125;
int zero = 0;
unsigned long long int var_14 = 14373508085282653772ULL;
short var_15 = (short)-4231;
int var_16 = 1769580292;
int var_17 = 403706671;
unsigned long long int var_18 = 16720947808322723660ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
