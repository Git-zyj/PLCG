#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
unsigned long long int var_2 = 11261135697098002342ULL;
_Bool var_6 = (_Bool)1;
short var_9 = (short)19793;
int zero = 0;
unsigned long long int var_10 = 13754089754607268973ULL;
signed char var_11 = (signed char)-54;
unsigned char var_12 = (unsigned char)98;
short var_13 = (short)24678;
_Bool var_14 = (_Bool)1;
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
