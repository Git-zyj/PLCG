#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -335108758;
unsigned int var_4 = 2559061886U;
int var_10 = -773558789;
int zero = 0;
long long int var_20 = -4410118049320490553LL;
unsigned int var_21 = 1435950887U;
unsigned short var_22 = (unsigned short)30845;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
