#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5109648297141173898ULL;
signed char var_3 = (signed char)91;
unsigned int var_5 = 2754214477U;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)200;
_Bool var_13 = (_Bool)1;
unsigned short var_16 = (unsigned short)50789;
unsigned char var_17 = (unsigned char)108;
unsigned short var_18 = (unsigned short)48651;
int zero = 0;
signed char var_19 = (signed char)95;
unsigned int var_20 = 495816929U;
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
