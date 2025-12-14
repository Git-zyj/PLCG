#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20059;
long long int var_9 = 96879918659913092LL;
unsigned char var_10 = (unsigned char)217;
long long int var_11 = -3677836984827419825LL;
unsigned int var_15 = 1169107905U;
unsigned char var_16 = (unsigned char)236;
int zero = 0;
unsigned long long int var_20 = 9281246417078063887ULL;
unsigned int var_21 = 1703557369U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
