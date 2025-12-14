#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 8878864824839057999LL;
unsigned int var_3 = 1185911221U;
unsigned short var_6 = (unsigned short)41205;
long long int var_7 = 86990990622833704LL;
long long int var_10 = 3243405392578527308LL;
int zero = 0;
long long int var_11 = -8971983077296621646LL;
long long int var_12 = 4453556180681060057LL;
unsigned char var_13 = (unsigned char)95;
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
