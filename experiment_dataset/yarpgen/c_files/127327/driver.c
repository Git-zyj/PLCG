#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2008957987;
unsigned short var_1 = (unsigned short)23355;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)150;
int var_9 = 1307111539;
int var_11 = 519413426;
unsigned char var_12 = (unsigned char)146;
long long int var_13 = -123332093233759742LL;
int zero = 0;
unsigned long long int var_14 = 11827063106652233253ULL;
unsigned char var_15 = (unsigned char)52;
unsigned long long int var_16 = 17907821482030262982ULL;
_Bool var_17 = (_Bool)1;
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
