#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1328756334;
long long int var_3 = -6258601849217032632LL;
unsigned int var_6 = 1061160052U;
int var_9 = -1098327421;
unsigned int var_10 = 597429775U;
unsigned int var_11 = 324468112U;
unsigned short var_13 = (unsigned short)25889;
unsigned short var_15 = (unsigned short)35778;
int zero = 0;
unsigned long long int var_17 = 6709422000401690263ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 6254037261789497953ULL;
unsigned short var_20 = (unsigned short)60722;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
