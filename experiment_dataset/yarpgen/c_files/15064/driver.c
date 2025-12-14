#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-63;
unsigned int var_3 = 1618082172U;
unsigned long long int var_5 = 16524684922561586239ULL;
unsigned int var_17 = 3919976528U;
int zero = 0;
unsigned char var_18 = (unsigned char)254;
unsigned long long int var_19 = 9503503176650639658ULL;
long long int var_20 = 3786913774592457661LL;
long long int var_21 = 2715048933912920035LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
