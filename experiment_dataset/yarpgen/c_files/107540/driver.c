#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3158505242U;
unsigned short var_3 = (unsigned short)37032;
signed char var_5 = (signed char)-98;
int var_6 = 1430322800;
unsigned short var_9 = (unsigned short)41514;
unsigned short var_12 = (unsigned short)32372;
int zero = 0;
unsigned short var_14 = (unsigned short)48245;
unsigned char var_15 = (unsigned char)101;
unsigned short var_16 = (unsigned short)64409;
unsigned long long int var_17 = 16544071094061802712ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
