#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8541663792652960008LL;
unsigned int var_3 = 4131673600U;
long long int var_6 = -1263255145451118996LL;
_Bool var_7 = (_Bool)0;
signed char var_13 = (signed char)-127;
unsigned long long int var_16 = 16856408727662853632ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
