#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)134;
unsigned int var_4 = 4246347994U;
unsigned int var_6 = 3101445405U;
unsigned short var_9 = (unsigned short)16662;
unsigned long long int var_14 = 4680792248175934597ULL;
unsigned long long int var_16 = 8597838518380700873ULL;
int zero = 0;
int var_19 = -954768968;
signed char var_20 = (signed char)22;
short var_21 = (short)-10424;
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
