#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-119;
_Bool var_9 = (_Bool)1;
unsigned char var_13 = (unsigned char)206;
int zero = 0;
unsigned int var_14 = 1017298242U;
unsigned int var_15 = 531542476U;
signed char var_16 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
