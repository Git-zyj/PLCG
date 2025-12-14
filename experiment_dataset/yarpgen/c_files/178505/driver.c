#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35709;
int var_2 = 930705618;
int var_13 = -87876578;
unsigned char var_15 = (unsigned char)38;
int zero = 0;
unsigned long long int var_18 = 11315965956066168106ULL;
unsigned char var_19 = (unsigned char)31;
unsigned char var_20 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
