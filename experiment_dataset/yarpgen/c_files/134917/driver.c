#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 51540264U;
unsigned short var_2 = (unsigned short)38874;
unsigned long long int var_3 = 15161879065109450372ULL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 547504077586544541LL;
unsigned short var_13 = (unsigned short)34448;
int zero = 0;
long long int var_14 = -725139218860811771LL;
long long int var_15 = -2014966902198180533LL;
void init() {
}

void checksum() {
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
