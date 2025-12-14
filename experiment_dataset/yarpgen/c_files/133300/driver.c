#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-30;
unsigned char var_7 = (unsigned char)235;
unsigned short var_9 = (unsigned short)18381;
long long int var_15 = 6317977444771918753LL;
int var_18 = -784981699;
int zero = 0;
int var_20 = 1686314169;
unsigned short var_21 = (unsigned short)28847;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
