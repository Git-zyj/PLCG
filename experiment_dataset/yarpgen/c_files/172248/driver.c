#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15944;
unsigned char var_3 = (unsigned char)247;
unsigned int var_4 = 777563703U;
long long int var_6 = -8079588692560099686LL;
unsigned short var_15 = (unsigned short)57550;
int zero = 0;
unsigned char var_19 = (unsigned char)116;
unsigned char var_20 = (unsigned char)49;
unsigned short var_21 = (unsigned short)59109;
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
