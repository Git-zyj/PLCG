#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -395293223721997652LL;
short var_1 = (short)6005;
long long int var_3 = -2509007398579915922LL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-85;
short var_6 = (short)18031;
short var_8 = (short)12337;
short var_9 = (short)15581;
int zero = 0;
short var_11 = (short)-19983;
unsigned short var_12 = (unsigned short)45041;
unsigned char var_13 = (unsigned char)40;
int var_14 = 2001080938;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
