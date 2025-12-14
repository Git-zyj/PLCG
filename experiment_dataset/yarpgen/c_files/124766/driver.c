#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
_Bool var_4 = (_Bool)0;
int var_5 = -689545074;
long long int var_6 = -2689339487144009791LL;
unsigned char var_8 = (unsigned char)60;
int var_9 = 1604080178;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-72;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-106;
long long int var_18 = 40724876037467856LL;
unsigned long long int var_19 = 6234452099016535171ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
