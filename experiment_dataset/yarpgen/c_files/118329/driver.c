#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4507049816510795313LL;
long long int var_6 = -3693103487903417738LL;
int var_8 = 1157810760;
short var_9 = (short)1668;
short var_10 = (short)-10126;
unsigned int var_12 = 204714257U;
int zero = 0;
signed char var_13 = (signed char)-52;
short var_14 = (short)-30789;
unsigned int var_15 = 1452938257U;
short var_16 = (short)14480;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
