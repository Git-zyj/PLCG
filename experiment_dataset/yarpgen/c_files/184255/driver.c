#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 17461905540595785990ULL;
unsigned long long int var_8 = 3809717599949698219ULL;
unsigned long long int var_13 = 14779772713171096732ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)1523;
int var_17 = 475417433;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
