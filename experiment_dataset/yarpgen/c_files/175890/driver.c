#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
long long int var_1 = -5575412623560992536LL;
unsigned int var_2 = 3461862228U;
long long int var_3 = -434990421510998674LL;
unsigned char var_4 = (unsigned char)48;
unsigned int var_5 = 2662074571U;
signed char var_6 = (signed char)-41;
unsigned char var_8 = (unsigned char)255;
unsigned long long int var_9 = 2976250196119089696ULL;
signed char var_10 = (signed char)-31;
int var_11 = -1106603636;
int zero = 0;
signed char var_13 = (signed char)30;
int var_14 = 232861991;
long long int var_15 = -2922651570656850907LL;
long long int var_16 = -1311050422618831748LL;
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
