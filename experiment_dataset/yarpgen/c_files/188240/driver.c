#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2985449282U;
_Bool var_4 = (_Bool)0;
long long int var_10 = -5798487266207549181LL;
long long int var_11 = -1186140792125452627LL;
int zero = 0;
int var_15 = -971117267;
int var_16 = -1969631100;
unsigned int var_17 = 3634030291U;
unsigned long long int var_18 = 6051061203621904113ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
