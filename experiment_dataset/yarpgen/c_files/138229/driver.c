#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
long long int var_9 = 1110841821213261148LL;
long long int var_12 = -1830642644885389399LL;
unsigned short var_17 = (unsigned short)12607;
long long int var_19 = 8193484428852485476LL;
int zero = 0;
unsigned int var_20 = 2997920548U;
long long int var_21 = 8366400321781934416LL;
unsigned short var_22 = (unsigned short)52849;
unsigned int var_23 = 2377938602U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
