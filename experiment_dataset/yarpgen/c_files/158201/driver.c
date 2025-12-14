#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1913115300U;
long long int var_4 = -579412158342876010LL;
unsigned char var_6 = (unsigned char)144;
int var_8 = -568547057;
int var_9 = 1976706237;
int zero = 0;
int var_11 = 1256525334;
unsigned short var_12 = (unsigned short)33302;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
