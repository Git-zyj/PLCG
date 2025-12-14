#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)204;
int var_4 = 1552234187;
int var_7 = 881994228;
int zero = 0;
signed char var_12 = (signed char)-39;
unsigned long long int var_13 = 6536784970172557960ULL;
unsigned long long int var_14 = 6190525528527769432ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
