#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2986755740U;
long long int var_1 = 4935082795965190493LL;
int var_2 = 955346657;
signed char var_3 = (signed char)60;
unsigned short var_4 = (unsigned short)18439;
unsigned int var_5 = 3210263654U;
unsigned int var_6 = 2873322997U;
unsigned long long int var_7 = 6421742435538329705ULL;
int var_8 = -1708358131;
unsigned int var_10 = 1171228773U;
int zero = 0;
long long int var_11 = 209872882943032872LL;
unsigned int var_12 = 2588346028U;
unsigned short var_13 = (unsigned short)4982;
unsigned int var_14 = 2781891987U;
unsigned char var_15 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
