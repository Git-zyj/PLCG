#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2083844616U;
signed char var_5 = (signed char)69;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)41816;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)35961;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)46;
signed char var_20 = (signed char)77;
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
