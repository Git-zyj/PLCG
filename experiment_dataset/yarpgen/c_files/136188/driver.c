#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)173;
unsigned char var_4 = (unsigned char)251;
long long int var_15 = -5880789365859345610LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-76;
signed char var_19 = (signed char)-81;
void init() {
}

void checksum() {
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
