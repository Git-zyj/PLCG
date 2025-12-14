#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -283059212879856564LL;
unsigned short var_2 = (unsigned short)17596;
unsigned long long int var_6 = 4991239261667688938ULL;
unsigned long long int var_9 = 15474825574897806236ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)103;
int var_12 = -126841820;
unsigned int var_13 = 772465055U;
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
