#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-51;
unsigned int var_5 = 2272449928U;
unsigned long long int var_6 = 7746582957348196837ULL;
short var_7 = (short)21268;
int var_9 = -208201772;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 8027276861033970347ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 4527401487153456656ULL;
unsigned long long int var_15 = 698238130300550648ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 3368003956U;
unsigned int var_18 = 2666810277U;
unsigned int var_19 = 2124452276U;
short var_20 = (short)-14797;
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
