#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)27;
signed char var_5 = (signed char)36;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 2798648674U;
short var_17 = (short)9681;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)26860;
signed char var_21 = (signed char)-11;
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
