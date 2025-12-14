#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 674120864U;
unsigned char var_6 = (unsigned char)191;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 826617315U;
long long int var_12 = 2183131068926317633LL;
int var_13 = -1174324110;
unsigned char var_14 = (unsigned char)111;
void init() {
}

void checksum() {
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
