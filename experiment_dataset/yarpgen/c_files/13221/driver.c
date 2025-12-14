#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1620812969;
_Bool var_4 = (_Bool)0;
long long int var_8 = -208617153758635092LL;
int var_9 = 1588275924;
int zero = 0;
unsigned long long int var_12 = 1841309800750319915ULL;
signed char var_13 = (signed char)75;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
