#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7773933279963892478LL;
signed char var_3 = (signed char)1;
long long int var_7 = -97204584268339478LL;
unsigned int var_9 = 1354255757U;
signed char var_10 = (signed char)56;
long long int var_13 = -7975341365466911829LL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-15374;
int zero = 0;
int var_18 = 70442536;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)121;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
