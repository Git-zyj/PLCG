#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1392024940453259730ULL;
unsigned long long int var_4 = 10455030201449394902ULL;
unsigned char var_9 = (unsigned char)50;
int zero = 0;
unsigned char var_19 = (unsigned char)5;
unsigned long long int var_20 = 3190350018865972511ULL;
unsigned char var_21 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
