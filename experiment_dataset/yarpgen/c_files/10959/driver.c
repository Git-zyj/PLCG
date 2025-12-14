#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)11701;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_9 = -457942530213457739LL;
int zero = 0;
unsigned char var_12 = (unsigned char)209;
long long int var_13 = 3319775568922915283LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
