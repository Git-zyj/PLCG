#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 886408942397854117ULL;
long long int var_1 = -583936446040126149LL;
long long int var_14 = -5672279018804378890LL;
int zero = 0;
long long int var_16 = -2211147275711800296LL;
unsigned short var_17 = (unsigned short)19427;
int var_18 = 730029796;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
