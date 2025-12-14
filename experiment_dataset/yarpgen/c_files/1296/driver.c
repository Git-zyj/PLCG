#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1883031629083902786LL;
int var_3 = -1083738043;
int var_6 = 1160465687;
unsigned short var_8 = (unsigned short)27762;
unsigned short var_10 = (unsigned short)9613;
int zero = 0;
int var_11 = 876149471;
unsigned short var_12 = (unsigned short)4345;
int var_13 = -1656164016;
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
