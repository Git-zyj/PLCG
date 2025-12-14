#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
long long int var_2 = -7369183429727936424LL;
unsigned long long int var_4 = 11826379599375103351ULL;
_Bool var_5 = (_Bool)0;
int var_6 = 1329842525;
short var_9 = (short)17057;
unsigned long long int var_10 = 4705102138025132109ULL;
long long int var_11 = -5085843799090189161LL;
long long int var_13 = 4139852904166215185LL;
_Bool var_15 = (_Bool)1;
signed char var_17 = (signed char)-73;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)98;
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
