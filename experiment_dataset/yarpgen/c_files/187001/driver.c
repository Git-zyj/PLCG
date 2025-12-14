#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3867;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)247;
unsigned short var_6 = (unsigned short)27313;
unsigned long long int var_8 = 6053228770928411176ULL;
int var_9 = -547225980;
unsigned short var_12 = (unsigned short)12705;
int zero = 0;
unsigned int var_15 = 2831448114U;
unsigned int var_16 = 2015488662U;
long long int var_17 = -8032511094859172879LL;
short var_18 = (short)25973;
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
