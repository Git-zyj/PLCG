#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3064718950U;
short var_13 = (short)6348;
int zero = 0;
unsigned long long int var_17 = 11469593099721488355ULL;
long long int var_18 = -2004570870084519204LL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
