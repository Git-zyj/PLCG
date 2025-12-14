#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
unsigned char var_4 = (unsigned char)100;
int var_8 = 1126369612;
long long int var_9 = -7585530773224901732LL;
int var_10 = -1721219317;
int zero = 0;
int var_18 = 107449513;
unsigned char var_19 = (unsigned char)249;
void init() {
}

void checksum() {
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
