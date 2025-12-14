#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7661972961974459033LL;
long long int var_7 = -5445489926447337824LL;
unsigned short var_8 = (unsigned short)22718;
long long int var_14 = 3733479019888946793LL;
int var_16 = -2089013319;
int zero = 0;
long long int var_17 = 1192603330702757834LL;
unsigned short var_18 = (unsigned short)34536;
int var_19 = -1288225080;
void init() {
}

void checksum() {
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
