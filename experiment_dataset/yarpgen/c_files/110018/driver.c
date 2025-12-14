#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)117;
unsigned long long int var_3 = 5912529437378213988ULL;
short var_6 = (short)268;
unsigned int var_7 = 927140268U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3903591594U;
unsigned long long int var_19 = 6562499512954166567ULL;
void init() {
}

void checksum() {
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
