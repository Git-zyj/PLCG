#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1258861935;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 8002677369367261905ULL;
short var_5 = (short)-9143;
int var_6 = -2101430162;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)4;
int var_13 = 1918431279;
int zero = 0;
long long int var_15 = -6761304542246774829LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
