#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -6081946138859692932LL;
unsigned long long int var_13 = 15342818302747396342ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)140;
unsigned int var_18 = 1455883665U;
unsigned short var_19 = (unsigned short)5977;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
