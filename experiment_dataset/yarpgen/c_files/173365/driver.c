#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1479085648;
unsigned char var_9 = (unsigned char)50;
unsigned short var_10 = (unsigned short)9325;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -4874189972993143398LL;
long long int var_13 = 4630180665313815572LL;
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
