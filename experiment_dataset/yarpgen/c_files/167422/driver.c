#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46147;
unsigned char var_3 = (unsigned char)249;
unsigned int var_9 = 3316065237U;
unsigned char var_10 = (unsigned char)61;
unsigned int var_11 = 1859780849U;
long long int var_12 = 5101156101031524440LL;
unsigned char var_13 = (unsigned char)33;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)110;
long long int var_20 = 1779895094090432355LL;
_Bool var_21 = (_Bool)1;
int var_22 = -365113980;
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
