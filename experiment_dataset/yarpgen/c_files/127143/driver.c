#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7308910155484332496ULL;
long long int var_5 = 1209203282354935602LL;
unsigned short var_6 = (unsigned short)58318;
unsigned char var_9 = (unsigned char)37;
int zero = 0;
long long int var_12 = 147180209905993742LL;
unsigned char var_13 = (unsigned char)59;
void init() {
}

void checksum() {
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
