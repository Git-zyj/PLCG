#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2455715381U;
unsigned long long int var_4 = 12236603754277029389ULL;
int var_7 = 236929515;
short var_8 = (short)10925;
signed char var_11 = (signed char)74;
int var_14 = -2023183154;
int zero = 0;
int var_17 = -585533071;
unsigned long long int var_18 = 16031391737282645752ULL;
long long int var_19 = 8891844821225272229LL;
unsigned char var_20 = (unsigned char)171;
unsigned short var_21 = (unsigned short)59119;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
