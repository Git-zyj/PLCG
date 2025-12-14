#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)70;
unsigned int var_4 = 2440564780U;
long long int var_5 = -642973739811097445LL;
unsigned char var_8 = (unsigned char)157;
int zero = 0;
short var_10 = (short)-13546;
_Bool var_11 = (_Bool)0;
int var_12 = 2072562108;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
