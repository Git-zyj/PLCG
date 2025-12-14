#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8668971461156561294LL;
unsigned int var_3 = 1416696176U;
unsigned short var_9 = (unsigned short)17534;
long long int var_11 = 4279522456749216295LL;
int var_13 = 595289046;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 2053494467435622467ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)14;
unsigned int var_21 = 1774484294U;
signed char var_22 = (signed char)-49;
unsigned char var_23 = (unsigned char)116;
signed char var_24 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
