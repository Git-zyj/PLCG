#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1527696811004508495ULL;
unsigned short var_3 = (unsigned short)62366;
unsigned short var_4 = (unsigned short)32575;
unsigned int var_5 = 3016024439U;
unsigned int var_6 = 800038355U;
short var_8 = (short)-12563;
signed char var_10 = (signed char)29;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 2537799824610324066ULL;
unsigned int var_15 = 2731154421U;
unsigned int var_16 = 2587428211U;
signed char var_17 = (signed char)-40;
unsigned long long int var_18 = 11779478052003622866ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
