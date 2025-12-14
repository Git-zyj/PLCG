#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 404609532;
unsigned int var_4 = 758125990U;
unsigned int var_5 = 1177210244U;
unsigned long long int var_7 = 7673711992827792582ULL;
unsigned int var_12 = 3213741503U;
int zero = 0;
unsigned char var_17 = (unsigned char)188;
unsigned int var_18 = 1532733377U;
int var_19 = 1543824209;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
