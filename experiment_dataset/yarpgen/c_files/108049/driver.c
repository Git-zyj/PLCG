#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5190811012262111726LL;
int var_3 = 451446049;
unsigned long long int var_4 = 10034119662558663509ULL;
signed char var_6 = (signed char)33;
signed char var_7 = (signed char)-67;
long long int var_8 = 819408752529946439LL;
int var_9 = 1431972661;
int var_10 = -660792242;
int var_11 = -1932390103;
unsigned long long int var_13 = 1859864045555905831ULL;
int zero = 0;
signed char var_14 = (signed char)-119;
unsigned long long int var_15 = 429295825794465426ULL;
signed char var_16 = (signed char)-17;
long long int var_17 = -3887862508679602579LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
