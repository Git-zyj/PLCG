#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)224;
int var_10 = -116219190;
unsigned int var_15 = 639123218U;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)98;
int zero = 0;
int var_19 = -847804259;
unsigned int var_20 = 1418796639U;
unsigned long long int var_21 = 12212097612779148016ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
