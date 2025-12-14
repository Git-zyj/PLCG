#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_5 = 3408240672U;
unsigned char var_6 = (unsigned char)169;
unsigned short var_7 = (unsigned short)52778;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)32;
int zero = 0;
unsigned int var_13 = 174398976U;
unsigned long long int var_14 = 7605602250024784451ULL;
void init() {
}

void checksum() {
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
