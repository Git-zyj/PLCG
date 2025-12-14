#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)76;
unsigned char var_10 = (unsigned char)228;
_Bool var_16 = (_Bool)0;
short var_17 = (short)3003;
int zero = 0;
long long int var_18 = -6478422109558709344LL;
long long int var_19 = 5632252073839790443LL;
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
