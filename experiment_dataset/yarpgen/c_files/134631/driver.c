#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
unsigned char var_2 = (unsigned char)184;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)33781;
unsigned short var_11 = (unsigned short)46352;
int zero = 0;
unsigned char var_12 = (unsigned char)132;
unsigned short var_13 = (unsigned short)44667;
signed char var_14 = (signed char)-60;
signed char var_15 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
