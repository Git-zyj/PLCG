#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5804756201254405726LL;
unsigned char var_2 = (unsigned char)73;
unsigned char var_3 = (unsigned char)140;
unsigned short var_4 = (unsigned short)44633;
unsigned long long int var_5 = 11685604570991967564ULL;
unsigned char var_6 = (unsigned char)68;
unsigned long long int var_7 = 2742593856322052778ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)138;
unsigned long long int var_11 = 391968713631184776ULL;
unsigned char var_12 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
