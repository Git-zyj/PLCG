#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)95;
long long int var_6 = -6521001714160209315LL;
unsigned char var_7 = (unsigned char)133;
long long int var_18 = -7214832195780065444LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
