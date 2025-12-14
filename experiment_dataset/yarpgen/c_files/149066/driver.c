#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8058516777979793876LL;
short var_4 = (short)-30180;
signed char var_5 = (signed char)-89;
signed char var_10 = (signed char)78;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 633128217102344854ULL;
long long int var_14 = 5880534821025478152LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-25085;
int var_18 = -82534426;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
