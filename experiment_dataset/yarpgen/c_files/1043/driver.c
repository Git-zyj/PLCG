#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1928830250597093060LL;
long long int var_1 = -5099545706050479952LL;
unsigned long long int var_3 = 10350063285906852269ULL;
unsigned char var_4 = (unsigned char)224;
unsigned char var_9 = (unsigned char)248;
unsigned short var_10 = (unsigned short)51606;
int var_11 = -1690193972;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)41;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 11313968384435757621ULL;
int var_16 = 1206139179;
short var_17 = (short)-21943;
_Bool var_18 = (_Bool)0;
int var_19 = 1287532334;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
