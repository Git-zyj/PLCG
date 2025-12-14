#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30871;
short var_9 = (short)14699;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-67;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 3152395503048081904ULL;
unsigned char var_19 = (unsigned char)101;
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
