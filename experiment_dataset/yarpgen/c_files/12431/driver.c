#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1037668780098423679ULL;
unsigned short var_7 = (unsigned short)52441;
unsigned long long int var_10 = 4815769658022898616ULL;
signed char var_14 = (signed char)-115;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)2602;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
