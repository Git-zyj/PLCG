#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
long long int var_9 = -2343442265286998396LL;
unsigned char var_10 = (unsigned char)44;
int var_13 = 892553006;
long long int var_16 = 4010850141419673779LL;
int zero = 0;
unsigned short var_18 = (unsigned short)28764;
_Bool var_19 = (_Bool)1;
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
