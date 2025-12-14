#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15648;
int var_6 = 343695941;
unsigned int var_13 = 1006324894U;
unsigned int var_15 = 4242511544U;
unsigned char var_16 = (unsigned char)14;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -1845693905;
long long int var_21 = -2221242030212415571LL;
unsigned short var_22 = (unsigned short)49997;
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
