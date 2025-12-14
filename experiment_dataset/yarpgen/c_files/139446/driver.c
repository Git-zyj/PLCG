#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10760308070270513766ULL;
unsigned long long int var_5 = 17533078188795626385ULL;
unsigned char var_8 = (unsigned char)208;
long long int var_15 = -6724926786660632623LL;
int zero = 0;
unsigned long long int var_19 = 11353957728197187141ULL;
unsigned int var_20 = 67089668U;
void init() {
}

void checksum() {
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
