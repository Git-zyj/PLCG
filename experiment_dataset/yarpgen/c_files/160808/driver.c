#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_6 = (unsigned short)24358;
unsigned long long int var_8 = 13939987329818021981ULL;
short var_9 = (short)-17862;
unsigned char var_11 = (unsigned char)18;
int var_14 = -1157233438;
signed char var_17 = (signed char)107;
int zero = 0;
signed char var_20 = (signed char)-114;
int var_21 = -2010822590;
short var_22 = (short)30564;
int var_23 = 1321366212;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
