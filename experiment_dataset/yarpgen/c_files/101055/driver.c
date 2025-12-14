#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14335921855716511255ULL;
unsigned int var_3 = 3458813071U;
int var_4 = -1007962242;
signed char var_5 = (signed char)62;
short var_7 = (short)11770;
long long int var_8 = -6762381982974710664LL;
unsigned long long int var_9 = 4592557667925400549ULL;
unsigned int var_10 = 3389978488U;
int zero = 0;
unsigned long long int var_12 = 4389807883938476847ULL;
long long int var_13 = -7037036989358507430LL;
unsigned int var_14 = 870046389U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
