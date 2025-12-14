#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5384;
short var_1 = (short)10702;
unsigned long long int var_2 = 3059868260733746617ULL;
signed char var_4 = (signed char)-79;
_Bool var_5 = (_Bool)0;
short var_7 = (short)13496;
unsigned long long int var_8 = 4921059664630956873ULL;
int zero = 0;
short var_10 = (short)20702;
unsigned char var_11 = (unsigned char)40;
unsigned char var_12 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
