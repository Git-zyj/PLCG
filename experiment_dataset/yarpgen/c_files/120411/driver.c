#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
unsigned int var_3 = 3364964161U;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int var_13 = -47594994;
unsigned short var_17 = (unsigned short)6271;
long long int var_18 = 7385746060231577814LL;
short var_19 = (short)26034;
int zero = 0;
signed char var_20 = (signed char)88;
unsigned int var_21 = 1928319432U;
int var_22 = 1425332293;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
