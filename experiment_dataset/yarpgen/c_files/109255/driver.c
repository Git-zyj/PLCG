#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7825;
unsigned char var_1 = (unsigned char)67;
int var_2 = 232252601;
unsigned int var_4 = 3131016076U;
unsigned short var_6 = (unsigned short)33884;
signed char var_7 = (signed char)-41;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-87;
int var_13 = -278626277;
int zero = 0;
int var_14 = 213931819;
unsigned long long int var_15 = 8540557154213508396ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)32681;
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
