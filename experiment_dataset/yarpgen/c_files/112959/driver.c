#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 213650124U;
unsigned char var_4 = (unsigned char)156;
unsigned short var_6 = (unsigned short)51176;
unsigned char var_8 = (unsigned char)181;
short var_13 = (short)11762;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 2142857966;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
