#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)178;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)62183;
int var_3 = -98767344;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)18164;
signed char var_7 = (signed char)-32;
unsigned char var_8 = (unsigned char)131;
unsigned char var_9 = (unsigned char)230;
int zero = 0;
unsigned long long int var_10 = 805830651469760009ULL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
