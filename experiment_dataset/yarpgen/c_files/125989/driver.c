#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8092268008616946299LL;
signed char var_4 = (signed char)14;
unsigned long long int var_5 = 2949410513499484835ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 17608616761910761821ULL;
long long int var_8 = 6860486261542151990LL;
long long int var_11 = -8047771514303452403LL;
unsigned long long int var_13 = 795717506958633635ULL;
int zero = 0;
long long int var_14 = 5559923522961418866LL;
signed char var_15 = (signed char)-94;
unsigned long long int var_16 = 3233414321368729991ULL;
signed char var_17 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
