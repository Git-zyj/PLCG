#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18209;
long long int var_1 = -3989212382039726647LL;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 996584263U;
int var_5 = 148239732;
unsigned int var_6 = 3114235444U;
unsigned short var_7 = (unsigned short)19825;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 2280781877U;
long long int var_11 = -5284971452949659422LL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
