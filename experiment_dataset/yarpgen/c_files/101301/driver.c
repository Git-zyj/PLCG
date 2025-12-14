#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -64091061;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_9 = 989431766U;
unsigned char var_11 = (unsigned char)209;
int zero = 0;
unsigned short var_14 = (unsigned short)45002;
unsigned int var_15 = 2753506715U;
int var_16 = 598202041;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
