#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
unsigned int var_1 = 1451478930U;
unsigned long long int var_5 = 14881858893072320334ULL;
short var_9 = (short)30011;
int zero = 0;
unsigned char var_11 = (unsigned char)138;
long long int var_12 = 5257612024436890406LL;
short var_13 = (short)21346;
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
