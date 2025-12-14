#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11044600908318829192ULL;
unsigned int var_4 = 1586943156U;
int var_7 = -105030433;
long long int var_9 = 1653052853041651677LL;
short var_10 = (short)-5943;
unsigned int var_12 = 3666944343U;
int zero = 0;
long long int var_13 = -6270409488691041982LL;
short var_14 = (short)9779;
unsigned char var_15 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
