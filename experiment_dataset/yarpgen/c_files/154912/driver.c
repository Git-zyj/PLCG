#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)217;
unsigned short var_2 = (unsigned short)64966;
unsigned long long int var_3 = 9077171219513327508ULL;
unsigned short var_4 = (unsigned short)1653;
long long int var_5 = 4662868209726568408LL;
int var_6 = -787629254;
signed char var_7 = (signed char)(-127 - 1);
int var_9 = 1160985042;
int var_10 = -1506060060;
unsigned char var_11 = (unsigned char)168;
int zero = 0;
signed char var_12 = (signed char)79;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)238;
signed char var_15 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
