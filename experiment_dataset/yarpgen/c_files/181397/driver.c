#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 645273122U;
int var_2 = -1306567587;
unsigned char var_3 = (unsigned char)10;
unsigned int var_6 = 2562837734U;
_Bool var_7 = (_Bool)0;
short var_8 = (short)18141;
unsigned int var_9 = 2509663013U;
int var_10 = 1903278652;
int var_11 = 586341698;
signed char var_12 = (signed char)27;
int zero = 0;
unsigned short var_13 = (unsigned short)62566;
int var_14 = 1580836036;
unsigned short var_15 = (unsigned short)11326;
int var_16 = 1687242901;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
