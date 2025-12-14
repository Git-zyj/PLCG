#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1374054700;
long long int var_2 = 956335740111295137LL;
unsigned short var_3 = (unsigned short)38278;
unsigned char var_4 = (unsigned char)86;
int var_5 = 1841417553;
signed char var_6 = (signed char)27;
_Bool var_11 = (_Bool)0;
short var_12 = (short)21582;
int zero = 0;
long long int var_13 = -2017610015794593213LL;
long long int var_14 = -4578456365365711855LL;
unsigned int var_15 = 3415590778U;
unsigned long long int var_16 = 1469647281947664318ULL;
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
