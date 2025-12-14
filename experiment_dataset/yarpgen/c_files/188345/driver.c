#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -1438113190;
int var_12 = 311365498;
unsigned int var_13 = 3483313992U;
unsigned char var_14 = (unsigned char)128;
unsigned long long int var_18 = 14058696169675948614ULL;
int zero = 0;
short var_19 = (short)721;
signed char var_20 = (signed char)-28;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
