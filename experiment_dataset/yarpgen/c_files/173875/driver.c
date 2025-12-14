#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)110;
unsigned char var_10 = (unsigned char)156;
short var_14 = (short)31866;
int zero = 0;
long long int var_16 = 3645559353709831055LL;
unsigned char var_17 = (unsigned char)22;
unsigned char var_18 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
