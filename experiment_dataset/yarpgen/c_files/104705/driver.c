#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11207552294791956670ULL;
unsigned int var_1 = 1974737551U;
unsigned int var_2 = 3997595332U;
unsigned short var_3 = (unsigned short)54630;
short var_4 = (short)28560;
unsigned short var_5 = (unsigned short)28361;
unsigned long long int var_6 = 14136484142234241714ULL;
unsigned short var_10 = (unsigned short)5839;
unsigned int var_11 = 4258223546U;
int zero = 0;
unsigned short var_12 = (unsigned short)48319;
short var_13 = (short)-13898;
long long int var_14 = -3260533366920267405LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
