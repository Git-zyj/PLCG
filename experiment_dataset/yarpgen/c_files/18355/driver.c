#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15824848319183998988ULL;
unsigned char var_4 = (unsigned char)225;
unsigned char var_5 = (unsigned char)139;
short var_7 = (short)4123;
unsigned long long int var_11 = 5750613666094264624ULL;
signed char var_14 = (signed char)3;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1341515195;
_Bool var_19 = (_Bool)1;
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
