#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1691006755U;
long long int var_1 = 2584293738928677756LL;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)41473;
_Bool var_7 = (_Bool)1;
long long int var_8 = -2601905060477101082LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)78;
short var_17 = (short)9222;
unsigned char var_18 = (unsigned char)29;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
