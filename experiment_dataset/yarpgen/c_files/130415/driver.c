#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4441803698418448733ULL;
unsigned long long int var_5 = 13397164453879066589ULL;
int var_8 = 633867430;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_18 = 1473588186;
unsigned char var_19 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
