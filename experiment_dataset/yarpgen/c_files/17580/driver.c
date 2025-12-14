#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24776;
unsigned char var_3 = (unsigned char)205;
unsigned short var_5 = (unsigned short)23949;
signed char var_7 = (signed char)-86;
long long int var_10 = -488929572992000582LL;
unsigned short var_11 = (unsigned short)58591;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned char var_17 = (unsigned char)43;
int zero = 0;
unsigned short var_18 = (unsigned short)23191;
unsigned long long int var_19 = 3489237497611805860ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 17300180754621182914ULL;
void init() {
}

void checksum() {
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
