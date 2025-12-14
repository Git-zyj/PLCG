#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1768630920;
signed char var_6 = (signed char)-26;
unsigned char var_8 = (unsigned char)29;
unsigned short var_9 = (unsigned short)27084;
unsigned short var_11 = (unsigned short)26230;
unsigned short var_12 = (unsigned short)38987;
int zero = 0;
unsigned int var_13 = 1533436346U;
unsigned long long int var_14 = 6381345799662008930ULL;
short var_15 = (short)14311;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
