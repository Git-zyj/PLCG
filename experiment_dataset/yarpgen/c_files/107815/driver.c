#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)184;
short var_7 = (short)20112;
unsigned short var_9 = (unsigned short)59387;
int zero = 0;
long long int var_10 = -2368607553275883886LL;
long long int var_11 = -4424961862695767907LL;
long long int var_12 = 7837917241322597610LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
