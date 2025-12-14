#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3576527592U;
unsigned int var_4 = 3676123498U;
short var_8 = (short)6241;
unsigned char var_9 = (unsigned char)47;
signed char var_10 = (signed char)96;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_15 = -1339796825;
unsigned int var_16 = 3932610063U;
void init() {
}

void checksum() {
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
