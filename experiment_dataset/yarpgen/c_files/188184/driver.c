#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)111;
int var_4 = 1216419347;
unsigned long long int var_6 = 8677587873678470066ULL;
int var_9 = -40689687;
short var_11 = (short)-12780;
signed char var_12 = (signed char)-5;
unsigned short var_14 = (unsigned short)57339;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)7;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-31;
unsigned long long int var_20 = 11165734953198217816ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
