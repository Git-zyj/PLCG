#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47412;
long long int var_5 = 8284136386743698539LL;
long long int var_13 = -869730299066137722LL;
unsigned char var_16 = (unsigned char)187;
int zero = 0;
unsigned char var_17 = (unsigned char)26;
signed char var_18 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
