#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 4216739840825152431LL;
unsigned short var_4 = (unsigned short)62938;
unsigned long long int var_7 = 729471209677515835ULL;
unsigned int var_8 = 257106379U;
unsigned long long int var_9 = 1224665382427902760ULL;
int zero = 0;
long long int var_10 = 7105289907131599130LL;
int var_11 = -188996126;
unsigned int var_12 = 2931611801U;
int var_13 = -1668345998;
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
