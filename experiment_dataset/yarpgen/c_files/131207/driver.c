#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3275989791036291284ULL;
unsigned char var_5 = (unsigned char)203;
unsigned short var_6 = (unsigned short)23548;
long long int var_7 = 8027368400796708733LL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 2070896626U;
signed char var_11 = (signed char)-63;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3778783752U;
short var_14 = (short)27357;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
