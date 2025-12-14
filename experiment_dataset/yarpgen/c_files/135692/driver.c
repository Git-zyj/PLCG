#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
signed char var_1 = (signed char)111;
short var_10 = (short)-27641;
unsigned short var_12 = (unsigned short)51405;
unsigned int var_16 = 1121607618U;
short var_18 = (short)-2514;
int zero = 0;
long long int var_20 = 3523084618375291281LL;
unsigned long long int var_21 = 9155841700690599463ULL;
void init() {
}

void checksum() {
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
