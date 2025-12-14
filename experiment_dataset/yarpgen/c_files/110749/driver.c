#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43913;
unsigned short var_1 = (unsigned short)56114;
unsigned long long int var_3 = 10742358325324590546ULL;
unsigned int var_8 = 2643211153U;
unsigned long long int var_9 = 12241330815236494827ULL;
long long int var_11 = -5374568797657500088LL;
unsigned int var_12 = 1569132092U;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-30;
void init() {
}

void checksum() {
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
