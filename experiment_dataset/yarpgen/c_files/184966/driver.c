#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65031;
unsigned long long int var_4 = 2397953676709762583ULL;
unsigned long long int var_5 = 17745316661717415749ULL;
int zero = 0;
unsigned long long int var_19 = 7990304495772771653ULL;
unsigned int var_20 = 1603335908U;
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
