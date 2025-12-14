#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_6 = 1240249498U;
unsigned char var_9 = (unsigned char)41;
unsigned char var_10 = (unsigned char)18;
short var_11 = (short)-17816;
int var_14 = 1055430770;
unsigned char var_17 = (unsigned char)25;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)42806;
unsigned char var_21 = (unsigned char)90;
void init() {
}

void checksum() {
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
