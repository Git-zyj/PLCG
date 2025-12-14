#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)195;
unsigned char var_5 = (unsigned char)84;
unsigned short var_6 = (unsigned short)37924;
short var_9 = (short)20149;
unsigned char var_14 = (unsigned char)31;
int zero = 0;
unsigned int var_18 = 3099177535U;
short var_19 = (short)-14425;
unsigned char var_20 = (unsigned char)223;
_Bool var_21 = (_Bool)0;
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
