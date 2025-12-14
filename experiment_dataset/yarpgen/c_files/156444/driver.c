#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
long long int var_9 = 4532543236750238630LL;
signed char var_11 = (signed char)-123;
int var_14 = 1214124139;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)20;
int zero = 0;
unsigned short var_19 = (unsigned short)52500;
long long int var_20 = 8756799050642864145LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
