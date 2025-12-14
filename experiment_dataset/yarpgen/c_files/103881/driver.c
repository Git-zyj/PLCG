#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)187;
signed char var_7 = (signed char)19;
long long int var_8 = 6412259533620518218LL;
_Bool var_10 = (_Bool)0;
signed char var_14 = (signed char)-117;
int zero = 0;
long long int var_15 = -7280846391231425976LL;
unsigned long long int var_16 = 3653203106058568182ULL;
void init() {
}

void checksum() {
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
