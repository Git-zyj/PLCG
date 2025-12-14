#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3947507145U;
long long int var_3 = 7314797959461112113LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 10283679374144899730ULL;
signed char var_10 = (signed char)-34;
int var_12 = -983395567;
long long int var_13 = -6214961515824306203LL;
int zero = 0;
signed char var_15 = (signed char)88;
unsigned long long int var_16 = 11624450563869048921ULL;
unsigned short var_17 = (unsigned short)22580;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
