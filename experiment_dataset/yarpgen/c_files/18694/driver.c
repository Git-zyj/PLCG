#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5073843951947602282LL;
unsigned int var_3 = 3590638685U;
long long int var_4 = -6222683642937863200LL;
short var_5 = (short)9168;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 16602909220835652145ULL;
long long int var_9 = 2428448683339050649LL;
int zero = 0;
unsigned long long int var_10 = 10649971906243895933ULL;
short var_11 = (short)27687;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
