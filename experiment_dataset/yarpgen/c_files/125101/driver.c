#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 957250733081089044LL;
short var_1 = (short)5688;
int var_4 = 1229464406;
unsigned short var_5 = (unsigned short)45628;
long long int var_9 = 6766670641160079633LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)85;
signed char var_15 = (signed char)-31;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
