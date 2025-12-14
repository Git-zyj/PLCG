#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 526922310U;
unsigned long long int var_6 = 14998717029909633193ULL;
unsigned long long int var_9 = 8197308614573676630ULL;
signed char var_10 = (signed char)123;
unsigned short var_11 = (unsigned short)19140;
signed char var_13 = (signed char)55;
unsigned long long int var_16 = 14068182584242669696ULL;
unsigned short var_17 = (unsigned short)4156;
signed char var_18 = (signed char)127;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
