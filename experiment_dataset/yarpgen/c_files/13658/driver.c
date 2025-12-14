#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22906;
unsigned long long int var_2 = 636590873141568890ULL;
unsigned short var_3 = (unsigned short)63714;
unsigned long long int var_4 = 6518580137354162354ULL;
unsigned char var_5 = (unsigned char)97;
signed char var_8 = (signed char)1;
unsigned char var_9 = (unsigned char)44;
unsigned short var_10 = (unsigned short)37698;
int var_12 = -883658749;
unsigned long long int var_14 = 15914466493966242599ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)117;
signed char var_16 = (signed char)-68;
int var_17 = 2075168929;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
