#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)214;
unsigned int var_3 = 1706110645U;
unsigned char var_4 = (unsigned char)118;
unsigned long long int var_7 = 14769688546487732421ULL;
unsigned int var_9 = 1961566468U;
int var_14 = -684859776;
unsigned char var_15 = (unsigned char)108;
int zero = 0;
unsigned int var_16 = 3207372431U;
int var_17 = 494144991;
long long int var_18 = 3484149866342416433LL;
int var_19 = 1253844861;
void init() {
}

void checksum() {
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
