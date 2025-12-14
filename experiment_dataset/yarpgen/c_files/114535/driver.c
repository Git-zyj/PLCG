#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19355;
unsigned long long int var_1 = 9404090081681160054ULL;
unsigned long long int var_2 = 10463144403716316643ULL;
short var_3 = (short)-20756;
unsigned long long int var_4 = 5116132474149208894ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-101;
unsigned long long int var_9 = 16422321432834026517ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)78;
signed char var_14 = (signed char)9;
unsigned int var_15 = 2858360490U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
