#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40534;
int var_5 = 1907784246;
unsigned int var_6 = 277193094U;
long long int var_7 = -1082557972629367107LL;
_Bool var_9 = (_Bool)0;
int var_10 = 1678617336;
int zero = 0;
int var_14 = -433883997;
long long int var_15 = -9024698063820572628LL;
unsigned int var_16 = 581361073U;
void init() {
}

void checksum() {
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
