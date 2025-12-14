#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
unsigned char var_2 = (unsigned char)93;
unsigned char var_3 = (unsigned char)123;
unsigned char var_5 = (unsigned char)193;
unsigned char var_8 = (unsigned char)193;
long long int var_9 = -6197017752326324953LL;
long long int var_11 = 4864080233049388740LL;
int zero = 0;
long long int var_12 = -8888871608983723607LL;
unsigned char var_13 = (unsigned char)242;
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
