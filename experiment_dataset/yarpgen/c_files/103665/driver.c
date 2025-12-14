#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2698018141U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 17146640016418405174ULL;
unsigned long long int var_5 = 10037628011200539701ULL;
signed char var_7 = (signed char)-86;
unsigned int var_11 = 1750646860U;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -1441021124197559565LL;
void init() {
}

void checksum() {
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
