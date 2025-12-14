#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -68486884;
int var_1 = 192354657;
unsigned int var_2 = 3150589644U;
int var_4 = -631071098;
unsigned long long int var_7 = 13265043996546528926ULL;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-52;
long long int var_14 = -5612040328216379469LL;
int zero = 0;
signed char var_15 = (signed char)22;
int var_16 = 1354455293;
int var_17 = 58493109;
unsigned int var_18 = 894375248U;
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
