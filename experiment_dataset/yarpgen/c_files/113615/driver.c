#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)244;
_Bool var_3 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1110679486U;
int zero = 0;
unsigned short var_14 = (unsigned short)58636;
int var_15 = -626722039;
int var_16 = 1829328426;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
