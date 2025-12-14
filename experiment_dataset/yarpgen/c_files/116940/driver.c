#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1125385671U;
unsigned char var_6 = (unsigned char)141;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)28;
short var_11 = (short)-3297;
unsigned short var_15 = (unsigned short)43091;
unsigned int var_19 = 3498874464U;
int zero = 0;
unsigned char var_20 = (unsigned char)236;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 7229318710146255179ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
