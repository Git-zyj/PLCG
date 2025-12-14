#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 225389844987953603ULL;
long long int var_6 = -7919498477205879380LL;
long long int var_8 = 2644790607466921439LL;
long long int var_12 = 2869845974626505287LL;
int zero = 0;
unsigned long long int var_15 = 1325997529493269556ULL;
long long int var_16 = -438698514526222495LL;
long long int var_17 = -238690318513107169LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
