#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -889732624357744425LL;
_Bool var_2 = (_Bool)1;
int var_5 = -1514555317;
unsigned int var_6 = 94312107U;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-293;
unsigned long long int var_16 = 18122236365947668125ULL;
int zero = 0;
signed char var_19 = (signed char)-117;
signed char var_20 = (signed char)-47;
void init() {
}

void checksum() {
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
