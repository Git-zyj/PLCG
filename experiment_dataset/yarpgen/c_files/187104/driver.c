#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2120117012;
unsigned short var_2 = (unsigned short)3664;
unsigned short var_4 = (unsigned short)58054;
unsigned short var_6 = (unsigned short)59594;
unsigned int var_11 = 726983284U;
unsigned long long int var_17 = 5684464333936098967ULL;
int zero = 0;
int var_18 = -948002475;
unsigned char var_19 = (unsigned char)195;
unsigned char var_20 = (unsigned char)9;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
