#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3059887743433570593ULL;
short var_2 = (short)13737;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 15489241806946812203ULL;
signed char var_9 = (signed char)-101;
unsigned long long int var_11 = 7859604339218032844ULL;
_Bool var_13 = (_Bool)1;
long long int var_16 = -9052809022782163573LL;
signed char var_18 = (signed char)79;
signed char var_19 = (signed char)22;
int zero = 0;
long long int var_20 = -377988734803152566LL;
long long int var_21 = -7638429380242194146LL;
signed char var_22 = (signed char)-22;
int var_23 = 1778540391;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
