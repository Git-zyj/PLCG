#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
long long int var_2 = -8635499703237242032LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = 4354506865062234243LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 5724796915470529196ULL;
unsigned int var_16 = 712925342U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
