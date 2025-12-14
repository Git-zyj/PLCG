#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 7431726800099304369LL;
signed char var_11 = (signed char)112;
int var_15 = 733628573;
int zero = 0;
unsigned int var_17 = 2165663003U;
unsigned long long int var_18 = 2339849361401548892ULL;
unsigned long long int var_19 = 13345680180008002846ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
