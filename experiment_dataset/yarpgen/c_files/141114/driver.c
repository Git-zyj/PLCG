#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7149995159299724949LL;
_Bool var_2 = (_Bool)0;
short var_6 = (short)-26566;
long long int var_8 = -2842011520480036149LL;
signed char var_9 = (signed char)110;
short var_15 = (short)10041;
int zero = 0;
unsigned int var_19 = 1878645938U;
short var_20 = (short)11075;
unsigned int var_21 = 95850586U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
