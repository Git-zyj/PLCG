#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3832581758456243894LL;
long long int var_3 = 2875084203214778714LL;
signed char var_4 = (signed char)-85;
long long int var_7 = -6183533078034383940LL;
unsigned long long int var_10 = 10858788135129719538ULL;
unsigned long long int var_11 = 7839283027070930731ULL;
int zero = 0;
signed char var_14 = (signed char)-92;
short var_15 = (short)11651;
void init() {
}

void checksum() {
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
