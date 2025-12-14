#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3066838863697919824LL;
signed char var_2 = (signed char)123;
long long int var_6 = 9087463446169900947LL;
long long int var_7 = 7661361803724821952LL;
unsigned short var_8 = (unsigned short)59300;
unsigned short var_9 = (unsigned short)60049;
unsigned int var_11 = 3120919200U;
short var_12 = (short)22870;
short var_15 = (short)-24114;
unsigned int var_17 = 1435181994U;
int zero = 0;
long long int var_18 = -8525085908935310475LL;
int var_19 = 1968603356;
short var_20 = (short)31596;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
