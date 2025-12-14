#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -49099928;
signed char var_3 = (signed char)-39;
unsigned long long int var_8 = 11155689008821171051ULL;
unsigned long long int var_9 = 1292374624984503523ULL;
unsigned short var_11 = (unsigned short)37689;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 13318552659294764363ULL;
signed char var_14 = (signed char)-100;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
