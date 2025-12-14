#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 679892016030109742LL;
long long int var_10 = -3453614241204461466LL;
int zero = 0;
long long int var_15 = 6387164080318606493LL;
long long int var_16 = -1950305988057361934LL;
long long int var_17 = -6024752757428377319LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
