#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15688365937088581695ULL;
int var_3 = -1125178768;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)81;
int var_13 = 686492377;
signed char var_14 = (signed char)-35;
int zero = 0;
signed char var_16 = (signed char)74;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 518187013U;
long long int var_19 = -6270294792278744295LL;
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
