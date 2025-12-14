#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)237;
unsigned short var_6 = (unsigned short)22609;
int var_8 = -27629241;
unsigned long long int var_9 = 1570167588843357389ULL;
long long int var_14 = 615730291165274633LL;
unsigned short var_15 = (unsigned short)53662;
int zero = 0;
int var_17 = 521233327;
_Bool var_18 = (_Bool)1;
long long int var_19 = -2043662504590112302LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
