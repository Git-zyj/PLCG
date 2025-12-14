#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -377250707;
unsigned char var_2 = (unsigned char)249;
short var_4 = (short)-1201;
long long int var_5 = -1884621451821593972LL;
unsigned short var_7 = (unsigned short)15644;
unsigned short var_9 = (unsigned short)31902;
short var_11 = (short)18650;
unsigned short var_12 = (unsigned short)60645;
signed char var_13 = (signed char)-8;
unsigned short var_14 = (unsigned short)54573;
unsigned long long int var_15 = 4586117108395406480ULL;
int zero = 0;
int var_16 = 886997274;
unsigned char var_17 = (unsigned char)134;
unsigned int var_18 = 1033367096U;
unsigned long long int var_19 = 12275325703563507479ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
