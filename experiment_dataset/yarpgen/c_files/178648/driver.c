#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)206;
_Bool var_6 = (_Bool)0;
unsigned long long int var_12 = 2757213772681385724ULL;
int zero = 0;
int var_16 = -352515726;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
long long int var_19 = 8317102646645332142LL;
unsigned int var_20 = 521864870U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
