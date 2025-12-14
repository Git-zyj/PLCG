#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10374674831380061762ULL;
int var_2 = 86038331;
signed char var_5 = (signed char)-16;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)46;
unsigned char var_12 = (unsigned char)137;
short var_13 = (short)2908;
unsigned long long int var_14 = 16549962806689306253ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
