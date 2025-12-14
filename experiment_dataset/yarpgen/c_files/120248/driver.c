#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55874;
long long int var_2 = 5650591998861486783LL;
signed char var_3 = (signed char)0;
short var_4 = (short)29769;
unsigned long long int var_8 = 17271904578827008076ULL;
signed char var_9 = (signed char)36;
int zero = 0;
unsigned long long int var_15 = 7228248394523329896ULL;
long long int var_16 = -5271958326995987510LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
