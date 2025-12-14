#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)160;
long long int var_8 = 3735488621468465883LL;
unsigned short var_9 = (unsigned short)22167;
long long int var_10 = 6058072995812733730LL;
int zero = 0;
unsigned char var_20 = (unsigned char)133;
long long int var_21 = 2419419330030574139LL;
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
