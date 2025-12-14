#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9687;
unsigned char var_3 = (unsigned char)227;
unsigned long long int var_4 = 12926409441180515991ULL;
_Bool var_5 = (_Bool)1;
short var_7 = (short)2031;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 6448657387036966424ULL;
int zero = 0;
int var_10 = 2138415225;
unsigned char var_11 = (unsigned char)171;
unsigned int var_12 = 1489742363U;
long long int var_13 = 6005149916016582496LL;
long long int var_14 = 5103345464943083097LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
