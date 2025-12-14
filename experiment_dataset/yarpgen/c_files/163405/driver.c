#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9093917019230605041LL;
long long int var_4 = 1730241443637726581LL;
long long int var_5 = -5931555772007324164LL;
int var_6 = -2072787436;
long long int var_8 = -3289694139263775234LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)200;
long long int var_19 = -763205044853002623LL;
long long int var_20 = -8261378891687282248LL;
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
