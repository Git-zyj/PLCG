#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
int var_1 = -1527212102;
int var_3 = -1663808563;
unsigned int var_4 = 4107186119U;
int var_7 = 815225465;
unsigned int var_9 = 395028251U;
signed char var_11 = (signed char)127;
int zero = 0;
unsigned int var_12 = 2862149167U;
unsigned long long int var_13 = 13432624991899738958ULL;
unsigned int var_14 = 1173538576U;
unsigned int var_15 = 112441415U;
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
