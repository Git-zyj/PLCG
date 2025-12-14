#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)217;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-18784;
unsigned int var_8 = 2366448738U;
unsigned long long int var_9 = 502512975856675190ULL;
unsigned long long int var_10 = 8528857678286945360ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)17382;
signed char var_12 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
