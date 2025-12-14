#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
_Bool var_1 = (_Bool)0;
int var_3 = -1893245314;
unsigned int var_4 = 2477803889U;
signed char var_5 = (signed char)57;
unsigned char var_8 = (unsigned char)54;
signed char var_10 = (signed char)70;
_Bool var_11 = (_Bool)0;
unsigned long long int var_15 = 4504757520689246782ULL;
short var_16 = (short)-141;
signed char var_18 = (signed char)12;
int zero = 0;
unsigned char var_19 = (unsigned char)43;
unsigned int var_20 = 1854116410U;
signed char var_21 = (signed char)39;
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
