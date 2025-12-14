#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-85;
_Bool var_8 = (_Bool)1;
short var_13 = (short)4604;
long long int var_14 = 6912063159049648940LL;
unsigned int var_15 = 4013642474U;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)28771;
unsigned char var_18 = (unsigned char)124;
void init() {
}

void checksum() {
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
