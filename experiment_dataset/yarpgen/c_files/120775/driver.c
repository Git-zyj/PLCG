#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)7332;
unsigned int var_2 = 2639469690U;
long long int var_3 = 7932405224506320198LL;
unsigned int var_9 = 2443390481U;
int var_10 = -487747547;
unsigned int var_13 = 2907909915U;
int zero = 0;
int var_17 = 219882557;
unsigned short var_18 = (unsigned short)51767;
unsigned short var_19 = (unsigned short)14801;
int var_20 = 964620137;
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
