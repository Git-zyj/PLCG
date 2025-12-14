#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3601132592U;
unsigned char var_3 = (unsigned char)46;
unsigned short var_4 = (unsigned short)45489;
long long int var_9 = 6567155768238517623LL;
int zero = 0;
unsigned int var_19 = 2456385643U;
long long int var_20 = -8180254162952760750LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
