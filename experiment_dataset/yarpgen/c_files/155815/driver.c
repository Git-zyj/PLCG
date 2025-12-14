#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 214400010;
_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 16705970877931364970ULL;
int var_6 = 421268098;
unsigned short var_7 = (unsigned short)28517;
unsigned char var_8 = (unsigned char)92;
unsigned long long int var_9 = 17420699523497444030ULL;
int zero = 0;
short var_10 = (short)24182;
unsigned char var_11 = (unsigned char)139;
unsigned short var_12 = (unsigned short)23511;
int var_13 = -1446086456;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
