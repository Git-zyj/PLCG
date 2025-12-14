#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21866;
int var_6 = 854880814;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 674693592269558174ULL;
int var_9 = -224665934;
_Bool var_10 = (_Bool)1;
int var_11 = -1529685581;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-104;
int var_15 = 1919769649;
signed char var_16 = (signed char)-55;
int zero = 0;
unsigned char var_18 = (unsigned char)46;
unsigned short var_19 = (unsigned short)60786;
short var_20 = (short)-29538;
long long int var_21 = -4727590691803898561LL;
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
