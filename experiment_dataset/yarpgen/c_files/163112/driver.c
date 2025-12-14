#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 163453544U;
unsigned short var_4 = (unsigned short)1843;
signed char var_8 = (signed char)50;
signed char var_10 = (signed char)-10;
short var_14 = (short)19442;
unsigned long long int var_15 = 3344585443130927837ULL;
unsigned char var_17 = (unsigned char)13;
int var_18 = -731839930;
int zero = 0;
long long int var_19 = -5384681224506019766LL;
unsigned int var_20 = 2875446680U;
unsigned short var_21 = (unsigned short)65259;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
