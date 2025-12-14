#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
signed char var_3 = (signed char)-109;
_Bool var_4 = (_Bool)0;
short var_7 = (short)14315;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 3027981528U;
signed char var_16 = (signed char)-67;
unsigned int var_18 = 2103113489U;
int zero = 0;
signed char var_20 = (signed char)-48;
long long int var_21 = 5777463549013165153LL;
void init() {
}

void checksum() {
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
