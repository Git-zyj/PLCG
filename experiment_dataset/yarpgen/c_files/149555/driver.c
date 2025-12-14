#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18113;
unsigned short var_2 = (unsigned short)21835;
short var_4 = (short)16121;
unsigned int var_10 = 1096724061U;
short var_11 = (short)15439;
int zero = 0;
unsigned short var_16 = (unsigned short)61891;
signed char var_17 = (signed char)51;
int var_18 = -855239810;
_Bool var_19 = (_Bool)0;
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
