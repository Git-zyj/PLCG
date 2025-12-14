#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7578544585898838231LL;
int var_3 = 1571969217;
int var_8 = 603663588;
unsigned int var_11 = 4001253889U;
unsigned long long int var_12 = 1626096916763143168ULL;
long long int var_13 = -418475517119955068LL;
int zero = 0;
long long int var_18 = 2986776993923714877LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 600292638U;
void init() {
}

void checksum() {
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
