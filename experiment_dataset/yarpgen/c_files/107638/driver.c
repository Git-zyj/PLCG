#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13307911785959212456ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_14 = (unsigned char)106;
unsigned short var_16 = (unsigned short)23798;
int zero = 0;
unsigned short var_18 = (unsigned short)13041;
unsigned char var_19 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
