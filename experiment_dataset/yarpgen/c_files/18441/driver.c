#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
long long int var_2 = -4936127809404172491LL;
short var_3 = (short)30313;
long long int var_4 = -2059425231771118172LL;
unsigned int var_5 = 2063803080U;
int var_7 = -1599887852;
long long int var_8 = -2280000093557649347LL;
int zero = 0;
signed char var_12 = (signed char)-30;
short var_13 = (short)12421;
int var_14 = -426005544;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
