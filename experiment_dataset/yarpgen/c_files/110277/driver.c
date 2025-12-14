#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1652;
unsigned short var_2 = (unsigned short)8002;
unsigned int var_3 = 1986146U;
unsigned long long int var_10 = 15338321023077136904ULL;
unsigned char var_12 = (unsigned char)212;
int zero = 0;
long long int var_15 = -9149888703129807334LL;
unsigned int var_16 = 1361295682U;
int var_17 = 1711183812;
unsigned int var_18 = 219009590U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
