#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-920;
unsigned int var_5 = 3390304687U;
long long int var_8 = -7755247433115173463LL;
long long int var_11 = -1379619965287116151LL;
unsigned long long int var_12 = 2165662387462788397ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 4300624631569411383LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
