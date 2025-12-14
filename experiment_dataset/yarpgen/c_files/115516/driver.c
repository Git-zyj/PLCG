#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)176;
unsigned char var_3 = (unsigned char)34;
unsigned int var_4 = 4154443941U;
_Bool var_5 = (_Bool)1;
signed char var_16 = (signed char)-62;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = -7930191454729612943LL;
unsigned int var_21 = 2487874635U;
long long int var_22 = -4683427742063659603LL;
void init() {
}

void checksum() {
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
