#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)208;
signed char var_7 = (signed char)50;
_Bool var_9 = (_Bool)1;
long long int var_10 = -4933662621851100596LL;
int zero = 0;
unsigned char var_11 = (unsigned char)61;
unsigned char var_12 = (unsigned char)198;
unsigned char var_13 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
