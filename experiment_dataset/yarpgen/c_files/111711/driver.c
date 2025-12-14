#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)113;
unsigned int var_4 = 3333148885U;
unsigned long long int var_10 = 434951501935116372ULL;
unsigned char var_14 = (unsigned char)74;
int zero = 0;
short var_17 = (short)10554;
int var_18 = 1262777492;
short var_19 = (short)-12206;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
