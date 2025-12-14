#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_5 = (signed char)13;
signed char var_6 = (signed char)-28;
unsigned long long int var_12 = 16334078692209384987ULL;
_Bool var_15 = (_Bool)0;
unsigned char var_17 = (unsigned char)141;
int zero = 0;
unsigned char var_19 = (unsigned char)112;
unsigned short var_20 = (unsigned short)4676;
unsigned int var_21 = 2274910668U;
unsigned short var_22 = (unsigned short)24847;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
