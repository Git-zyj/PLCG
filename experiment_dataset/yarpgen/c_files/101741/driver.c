#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1448666965;
unsigned char var_1 = (unsigned char)52;
signed char var_3 = (signed char)-117;
int var_4 = 1585711166;
unsigned char var_5 = (unsigned char)28;
long long int var_6 = -2108028029470735597LL;
int var_7 = 603709115;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)240;
long long int var_13 = 4240248265874308156LL;
void init() {
}

void checksum() {
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
