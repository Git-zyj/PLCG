#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-117;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-64;
long long int var_6 = -7243025756859547550LL;
long long int var_9 = 1600768835093597819LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-107;
signed char var_13 = (signed char)-91;
unsigned int var_14 = 1819335322U;
unsigned long long int var_15 = 1607139847550051629ULL;
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
