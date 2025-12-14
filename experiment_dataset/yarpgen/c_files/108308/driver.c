#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)10669;
short var_12 = (short)22654;
unsigned char var_13 = (unsigned char)68;
signed char var_19 = (signed char)92;
int zero = 0;
unsigned long long int var_20 = 11733794077806993402ULL;
_Bool var_21 = (_Bool)0;
long long int var_22 = 5618357077088634085LL;
unsigned long long int var_23 = 2047239927096082629ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
