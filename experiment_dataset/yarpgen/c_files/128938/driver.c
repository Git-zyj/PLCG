#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13883344019698125592ULL;
unsigned long long int var_2 = 17929764397803543650ULL;
long long int var_8 = -5361703164270226488LL;
unsigned int var_9 = 2750898683U;
signed char var_11 = (signed char)-86;
unsigned int var_12 = 2280726542U;
int zero = 0;
int var_13 = 474280258;
short var_14 = (short)23593;
unsigned int var_15 = 171543360U;
unsigned long long int var_16 = 5121218810805424899ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
