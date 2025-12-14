#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54264;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
int var_6 = 1028201732;
signed char var_9 = (signed char)-83;
unsigned long long int var_11 = 4118672569557127352ULL;
int zero = 0;
unsigned int var_19 = 889133243U;
unsigned int var_20 = 1162304240U;
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
