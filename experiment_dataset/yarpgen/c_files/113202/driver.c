#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9066;
long long int var_11 = 5726391022028462847LL;
int var_12 = -1935354179;
unsigned char var_18 = (unsigned char)54;
int zero = 0;
unsigned char var_19 = (unsigned char)119;
long long int var_20 = -1690220643424146493LL;
unsigned short var_21 = (unsigned short)33407;
int var_22 = 60886318;
long long int var_23 = 9076770792380364229LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
