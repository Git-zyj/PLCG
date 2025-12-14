#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2084674173150769848LL;
unsigned long long int var_4 = 7656746179616531261ULL;
unsigned long long int var_6 = 16346875773573269043ULL;
unsigned long long int var_11 = 14128861047460456158ULL;
int zero = 0;
unsigned int var_12 = 3284361004U;
unsigned int var_13 = 3029180370U;
signed char var_14 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
