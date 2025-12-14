#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 1679753945905058599ULL;
unsigned char var_9 = (unsigned char)65;
unsigned long long int var_11 = 12593961247886083629ULL;
int zero = 0;
unsigned int var_12 = 934543526U;
long long int var_13 = -4640856295783161689LL;
unsigned short var_14 = (unsigned short)31118;
void init() {
}

void checksum() {
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
