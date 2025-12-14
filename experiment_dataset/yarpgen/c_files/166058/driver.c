#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1215;
unsigned char var_7 = (unsigned char)124;
unsigned short var_9 = (unsigned short)50324;
unsigned char var_10 = (unsigned char)66;
int var_11 = -1140290319;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)7460;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
