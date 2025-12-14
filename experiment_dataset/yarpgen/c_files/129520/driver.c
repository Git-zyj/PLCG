#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7196353847451562863ULL;
unsigned char var_7 = (unsigned char)108;
short var_8 = (short)4663;
long long int var_9 = -3222883786154912345LL;
int zero = 0;
short var_10 = (short)-5390;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)58234;
int var_13 = 1010505151;
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
