#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
unsigned long long int var_1 = 13685383200678892458ULL;
short var_2 = (short)13487;
int var_7 = -735654064;
signed char var_9 = (signed char)74;
_Bool var_12 = (_Bool)1;
unsigned char var_16 = (unsigned char)14;
int zero = 0;
unsigned int var_19 = 3714446562U;
signed char var_20 = (signed char)-7;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
