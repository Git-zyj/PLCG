#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 779134173;
unsigned long long int var_5 = 15131829250556065502ULL;
long long int var_7 = -3500771594040657709LL;
unsigned char var_9 = (unsigned char)217;
unsigned char var_11 = (unsigned char)240;
unsigned int var_15 = 1726038466U;
_Bool var_16 = (_Bool)0;
short var_17 = (short)787;
long long int var_18 = -2242213888515085587LL;
int zero = 0;
signed char var_19 = (signed char)114;
unsigned short var_20 = (unsigned short)24707;
short var_21 = (short)-24309;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
