#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
unsigned long long int var_3 = 13350340624849718558ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)4673;
unsigned long long int var_6 = 15365608915876996728ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)235;
short var_10 = (short)5688;
int zero = 0;
long long int var_11 = -2203481713341447336LL;
short var_12 = (short)-24553;
int var_13 = 44797039;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
