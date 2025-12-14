#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_8 = (unsigned char)96;
unsigned char var_9 = (unsigned char)89;
short var_10 = (short)30479;
int zero = 0;
unsigned char var_18 = (unsigned char)145;
long long int var_19 = 1754352170761944113LL;
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
