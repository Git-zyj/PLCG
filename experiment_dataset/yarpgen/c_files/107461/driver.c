#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2852736068U;
int var_2 = -1996288901;
int var_4 = 568209391;
int var_8 = 133282935;
long long int var_9 = -5147729430553564908LL;
int zero = 0;
signed char var_11 = (signed char)86;
unsigned char var_12 = (unsigned char)95;
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
