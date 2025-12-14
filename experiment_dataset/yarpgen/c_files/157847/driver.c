#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_4 = 3050176500U;
unsigned short var_7 = (unsigned short)28157;
unsigned int var_8 = 224257645U;
long long int var_9 = -5282271187555006852LL;
unsigned short var_10 = (unsigned short)57341;
unsigned short var_13 = (unsigned short)51861;
unsigned char var_14 = (unsigned char)217;
unsigned short var_15 = (unsigned short)19373;
unsigned char var_16 = (unsigned char)30;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)59448;
unsigned short var_21 = (unsigned short)49498;
signed char var_22 = (signed char)90;
unsigned short var_23 = (unsigned short)20380;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
