#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-124;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)246;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-20;
unsigned int var_11 = 63358916U;
unsigned long long int var_13 = 4733168880876131908ULL;
int zero = 0;
int var_18 = -826930386;
unsigned char var_19 = (unsigned char)24;
unsigned int var_20 = 2482958682U;
int var_21 = -155905330;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
