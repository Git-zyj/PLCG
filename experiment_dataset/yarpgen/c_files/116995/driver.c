#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
int var_7 = 615026354;
int var_8 = 877573361;
unsigned short var_9 = (unsigned short)16651;
unsigned short var_10 = (unsigned short)11809;
short var_16 = (short)5700;
int zero = 0;
unsigned char var_19 = (unsigned char)53;
unsigned char var_20 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
