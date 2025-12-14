#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2459618487866613770ULL;
_Bool var_4 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_12 = -120385322;
unsigned short var_14 = (unsigned short)57503;
unsigned int var_18 = 3458845986U;
int zero = 0;
unsigned int var_19 = 2648636988U;
unsigned char var_20 = (unsigned char)185;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
