#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9815965776687851967ULL;
unsigned short var_4 = (unsigned short)905;
short var_5 = (short)-29433;
short var_7 = (short)-29330;
long long int var_8 = 4436363802329609006LL;
unsigned int var_9 = 3004481150U;
int zero = 0;
unsigned long long int var_13 = 17557863953652054782ULL;
unsigned long long int var_14 = 9081176768972502392ULL;
unsigned char var_15 = (unsigned char)21;
unsigned char var_16 = (unsigned char)208;
unsigned short var_17 = (unsigned short)31200;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
