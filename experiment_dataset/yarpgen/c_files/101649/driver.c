#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
int var_5 = -1644557742;
unsigned int var_8 = 3855653312U;
long long int var_10 = -8029297204964539066LL;
signed char var_11 = (signed char)6;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2782974532U;
long long int var_14 = -8923581193558976462LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
