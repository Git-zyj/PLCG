#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36487;
long long int var_4 = -59279653975782368LL;
unsigned short var_9 = (unsigned short)13420;
unsigned long long int var_12 = 7330719716941339227ULL;
unsigned int var_14 = 459634608U;
int zero = 0;
unsigned short var_17 = (unsigned short)50738;
short var_18 = (short)2410;
int var_19 = -1053497266;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
