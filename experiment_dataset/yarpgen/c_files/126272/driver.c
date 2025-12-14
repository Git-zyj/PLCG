#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8404719705388199512ULL;
long long int var_1 = -8825058057328139268LL;
signed char var_3 = (signed char)42;
int var_4 = -593326141;
unsigned long long int var_6 = 17400002087186849404ULL;
unsigned short var_8 = (unsigned short)49396;
signed char var_10 = (signed char)79;
int zero = 0;
unsigned long long int var_12 = 9149429492850252475ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
