#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8954;
unsigned int var_1 = 3107803957U;
unsigned short var_2 = (unsigned short)18549;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)27017;
short var_10 = (short)28100;
int zero = 0;
int var_11 = 269556094;
unsigned long long int var_12 = 15233230893158665282ULL;
void init() {
}

void checksum() {
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
