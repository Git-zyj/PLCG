#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6549010476442512766ULL;
_Bool var_1 = (_Bool)0;
long long int var_7 = -322667549817664107LL;
int zero = 0;
unsigned short var_13 = (unsigned short)14787;
unsigned short var_14 = (unsigned short)57780;
unsigned int var_15 = 4096823580U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
