#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3753131508U;
unsigned char var_8 = (unsigned char)216;
long long int var_9 = 7566420778758647442LL;
long long int var_16 = 2172393695475313016LL;
int zero = 0;
unsigned int var_17 = 2709050598U;
unsigned int var_18 = 2979382750U;
unsigned int var_19 = 940290720U;
int var_20 = -864938731;
unsigned char var_21 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
