#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11650089883343288324ULL;
long long int var_6 = 6949745629512150103LL;
unsigned int var_7 = 1274855907U;
signed char var_8 = (signed char)114;
unsigned char var_9 = (unsigned char)74;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)73;
short var_14 = (short)21757;
signed char var_15 = (signed char)91;
signed char var_16 = (signed char)-42;
signed char var_18 = (signed char)-46;
int zero = 0;
signed char var_19 = (signed char)-109;
unsigned long long int var_20 = 3704623569657990970ULL;
unsigned short var_21 = (unsigned short)57202;
long long int var_22 = -6800497267376734138LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
