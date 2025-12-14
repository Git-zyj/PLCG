#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3685667522U;
unsigned int var_3 = 255183165U;
unsigned char var_5 = (unsigned char)169;
unsigned long long int var_6 = 3747480193335250876ULL;
unsigned short var_9 = (unsigned short)21196;
unsigned short var_10 = (unsigned short)7347;
int zero = 0;
long long int var_12 = -3190692838845137547LL;
long long int var_13 = 7392350545836822023LL;
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
