#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22147;
signed char var_11 = (signed char)81;
long long int var_18 = -2196149235883578246LL;
int zero = 0;
unsigned int var_20 = 228910604U;
unsigned long long int var_21 = 5612498506397879025ULL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 7544446571930818688ULL;
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
