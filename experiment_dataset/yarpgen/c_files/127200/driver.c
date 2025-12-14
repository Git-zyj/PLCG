#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3248574340U;
int var_2 = -268995540;
int var_3 = -1075490207;
signed char var_5 = (signed char)-13;
unsigned char var_7 = (unsigned char)87;
signed char var_9 = (signed char)70;
unsigned int var_12 = 200082111U;
unsigned short var_14 = (unsigned short)34937;
int var_15 = 724499034;
unsigned char var_16 = (unsigned char)135;
unsigned short var_17 = (unsigned short)9639;
unsigned short var_18 = (unsigned short)47085;
int zero = 0;
int var_19 = 1954309722;
short var_20 = (short)23455;
unsigned int var_21 = 3404781305U;
int var_22 = -456547836;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
