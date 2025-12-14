#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7789353576674323124LL;
short var_6 = (short)21152;
unsigned int var_9 = 1175026683U;
unsigned int var_10 = 1939095192U;
unsigned int var_12 = 1894863864U;
short var_13 = (short)-28964;
long long int var_14 = -5803561913868687717LL;
unsigned char var_17 = (unsigned char)98;
int zero = 0;
int var_18 = -1731953645;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)121;
unsigned int var_21 = 3692380952U;
void init() {
}

void checksum() {
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
