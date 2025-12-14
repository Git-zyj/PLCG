#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29616;
signed char var_4 = (signed char)-78;
signed char var_5 = (signed char)-108;
unsigned long long int var_6 = 15746576238492914178ULL;
unsigned short var_9 = (unsigned short)64914;
unsigned int var_10 = 2020389288U;
signed char var_12 = (signed char)4;
signed char var_14 = (signed char)20;
int zero = 0;
long long int var_15 = 7986511255234575804LL;
unsigned long long int var_16 = 12235188124753037822ULL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1459087032U;
short var_19 = (short)20277;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
