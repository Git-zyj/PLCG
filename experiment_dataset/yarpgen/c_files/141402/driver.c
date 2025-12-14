#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)176;
long long int var_2 = -176216428602800268LL;
unsigned int var_3 = 1306341163U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 4155523360U;
unsigned short var_8 = (unsigned short)28756;
unsigned short var_12 = (unsigned short)40275;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 4137912956614168855ULL;
int var_15 = 857087976;
unsigned short var_16 = (unsigned short)28801;
unsigned short var_17 = (unsigned short)49844;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
