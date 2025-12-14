#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25903;
long long int var_2 = -2040188093296684031LL;
unsigned long long int var_3 = 17853443059074629185ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = -8846856767652237126LL;
unsigned long long int var_8 = 5726909479503725453ULL;
unsigned short var_14 = (unsigned short)6768;
int zero = 0;
unsigned long long int var_15 = 18093075006123759763ULL;
int var_16 = -305129787;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2348157286U;
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
