#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
unsigned char var_1 = (unsigned char)88;
unsigned char var_2 = (unsigned char)6;
unsigned char var_5 = (unsigned char)202;
unsigned char var_9 = (unsigned char)155;
int zero = 0;
unsigned char var_10 = (unsigned char)98;
unsigned char var_11 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
