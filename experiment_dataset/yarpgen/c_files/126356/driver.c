#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15051874479976229798ULL;
short var_1 = (short)19793;
unsigned long long int var_12 = 17093011222099745381ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)38;
unsigned long long int var_17 = 16170965723666455147ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
