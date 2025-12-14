#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -717140598;
int var_3 = 697703441;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 1634234740052872626ULL;
signed char var_11 = (signed char)-92;
long long int var_16 = -7007907238283327208LL;
int zero = 0;
unsigned int var_19 = 725799344U;
unsigned int var_20 = 4015388345U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
