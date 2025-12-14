#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8778677314386811007ULL;
int var_6 = -325548899;
unsigned char var_8 = (unsigned char)171;
long long int var_9 = -1009828031820585519LL;
signed char var_12 = (signed char)103;
int var_13 = 393951530;
unsigned long long int var_14 = 3972612132137229572ULL;
signed char var_15 = (signed char)44;
signed char var_17 = (signed char)22;
int zero = 0;
signed char var_19 = (signed char)111;
unsigned int var_20 = 3944592629U;
signed char var_21 = (signed char)95;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
