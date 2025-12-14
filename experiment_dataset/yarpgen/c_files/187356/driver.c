#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -198505297;
unsigned int var_1 = 1473116054U;
unsigned short var_2 = (unsigned short)2368;
unsigned long long int var_4 = 2720939623953037511ULL;
long long int var_6 = 8299183297380866632LL;
unsigned char var_9 = (unsigned char)21;
signed char var_10 = (signed char)-105;
signed char var_11 = (signed char)-102;
int var_15 = 1992385394;
int zero = 0;
unsigned short var_16 = (unsigned short)6765;
int var_17 = -1101711013;
unsigned long long int var_18 = 6287501247599754812ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
