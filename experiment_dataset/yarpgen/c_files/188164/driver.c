#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)227;
long long int var_3 = 258444196467017451LL;
unsigned char var_4 = (unsigned char)246;
unsigned char var_7 = (unsigned char)153;
int var_9 = -174931911;
unsigned long long int var_10 = 5262351259277061572ULL;
long long int var_15 = 7500000289754779549LL;
signed char var_18 = (signed char)122;
unsigned short var_19 = (unsigned short)9473;
int zero = 0;
unsigned int var_20 = 2841614232U;
unsigned short var_21 = (unsigned short)35081;
unsigned char var_22 = (unsigned char)158;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)79;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
