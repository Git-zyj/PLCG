#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3457853956277365640LL;
unsigned char var_4 = (unsigned char)147;
_Bool var_5 = (_Bool)1;
signed char var_10 = (signed char)0;
signed char var_11 = (signed char)48;
signed char var_12 = (signed char)66;
unsigned int var_13 = 210100237U;
short var_14 = (short)17032;
long long int var_15 = -8108374831490091345LL;
int zero = 0;
unsigned char var_17 = (unsigned char)133;
signed char var_18 = (signed char)67;
long long int var_19 = -3043563264929247598LL;
void init() {
}

void checksum() {
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
