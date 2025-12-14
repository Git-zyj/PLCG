#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6306222801337114425LL;
signed char var_13 = (signed char)32;
long long int var_14 = 6047863113429485661LL;
int zero = 0;
short var_17 = (short)-18816;
unsigned int var_18 = 2272968599U;
long long int var_19 = -3113748056904772518LL;
unsigned long long int var_20 = 3683713700759994078ULL;
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
