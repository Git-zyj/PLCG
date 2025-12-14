#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 91299065805811308ULL;
unsigned int var_6 = 3154701842U;
unsigned char var_7 = (unsigned char)246;
long long int var_10 = 7541629382562882541LL;
int zero = 0;
unsigned int var_14 = 191344003U;
int var_15 = -48400715;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
