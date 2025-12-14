#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2787;
unsigned long long int var_2 = 3234934499246087537ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_9 = (unsigned short)57166;
unsigned short var_10 = (unsigned short)22384;
long long int var_11 = 2893362314845333076LL;
unsigned short var_12 = (unsigned short)53090;
int zero = 0;
unsigned char var_13 = (unsigned char)185;
signed char var_14 = (signed char)32;
void init() {
}

void checksum() {
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
