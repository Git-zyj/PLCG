#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6959538209742269471LL;
long long int var_5 = -2987402665521342336LL;
short var_9 = (short)11658;
signed char var_12 = (signed char)-80;
signed char var_14 = (signed char)-25;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 6756302436728299795ULL;
void init() {
}

void checksum() {
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
