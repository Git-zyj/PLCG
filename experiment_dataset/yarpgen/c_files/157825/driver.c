#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13955;
unsigned char var_1 = (unsigned char)231;
unsigned char var_2 = (unsigned char)208;
unsigned int var_3 = 1584297507U;
_Bool var_4 = (_Bool)0;
short var_5 = (short)6525;
long long int var_6 = -8046989190553072896LL;
unsigned short var_7 = (unsigned short)21519;
unsigned int var_8 = 1063268076U;
short var_9 = (short)-25446;
unsigned long long int var_10 = 4585116253370704356ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)79;
unsigned short var_13 = (unsigned short)54252;
unsigned long long int var_14 = 3358469579572576887ULL;
unsigned long long int var_15 = 3431090676218325100ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
