#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9013;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)53;
unsigned long long int var_11 = 14917650554176099702ULL;
int zero = 0;
long long int var_14 = -1253493383422231955LL;
unsigned char var_15 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
