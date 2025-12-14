#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3696;
int var_4 = 724893844;
signed char var_9 = (signed char)59;
unsigned char var_14 = (unsigned char)98;
int zero = 0;
signed char var_18 = (signed char)30;
unsigned short var_19 = (unsigned short)21338;
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
