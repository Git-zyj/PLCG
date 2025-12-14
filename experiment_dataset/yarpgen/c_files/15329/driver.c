#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5769375059195237203LL;
unsigned long long int var_7 = 1925614560365645098ULL;
unsigned char var_8 = (unsigned char)202;
int zero = 0;
unsigned char var_11 = (unsigned char)138;
unsigned char var_12 = (unsigned char)65;
void init() {
}

void checksum() {
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
