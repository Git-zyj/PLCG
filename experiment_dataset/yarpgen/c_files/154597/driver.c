#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3569914182968138586LL;
unsigned long long int var_2 = 14156251666093188997ULL;
unsigned char var_4 = (unsigned char)43;
short var_5 = (short)-19724;
signed char var_7 = (signed char)-53;
int var_8 = -566717758;
long long int var_9 = -6058071741055820691LL;
int var_11 = -658596180;
unsigned int var_12 = 1964545804U;
int zero = 0;
signed char var_13 = (signed char)90;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)50087;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
