#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8749206376455577571LL;
long long int var_7 = 7963893654686043040LL;
unsigned char var_9 = (unsigned char)129;
long long int var_11 = -2096712162671952874LL;
short var_15 = (short)-26789;
int zero = 0;
unsigned long long int var_20 = 11300531675455346239ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
