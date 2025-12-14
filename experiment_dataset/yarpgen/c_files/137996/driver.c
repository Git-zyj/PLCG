#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-119;
unsigned char var_5 = (unsigned char)35;
unsigned int var_6 = 2194366324U;
unsigned long long int var_7 = 6695637607799041544ULL;
int var_8 = 1953048133;
unsigned int var_9 = 1150495883U;
unsigned char var_12 = (unsigned char)181;
unsigned char var_13 = (unsigned char)80;
int var_14 = 1230872170;
short var_15 = (short)-12274;
unsigned int var_16 = 3734526934U;
int zero = 0;
unsigned long long int var_20 = 272838567572715675ULL;
unsigned short var_21 = (unsigned short)57816;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
