#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2157801491519014937ULL;
unsigned short var_2 = (unsigned short)42901;
unsigned char var_3 = (unsigned char)251;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2501460418U;
unsigned long long int var_13 = 857206747406391763ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)1308;
long long int var_16 = -2848784356801591044LL;
long long int var_17 = 3823821078601625124LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
