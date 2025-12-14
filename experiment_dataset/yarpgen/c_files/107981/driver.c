#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -572490238;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 10712611123280198022ULL;
unsigned long long int var_15 = 2839930655729596781ULL;
int zero = 0;
unsigned long long int var_20 = 15707331625002759579ULL;
unsigned long long int var_21 = 7005532970604528871ULL;
unsigned short var_22 = (unsigned short)12318;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
