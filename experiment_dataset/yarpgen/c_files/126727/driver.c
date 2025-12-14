#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15829656758867076833ULL;
int var_2 = -535370500;
unsigned short var_9 = (unsigned short)54534;
_Bool var_14 = (_Bool)0;
unsigned char var_17 = (unsigned char)38;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -5880254;
int var_21 = 2016613986;
signed char var_22 = (signed char)-66;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
