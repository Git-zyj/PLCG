#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)167;
unsigned long long int var_4 = 12352782680284289379ULL;
long long int var_8 = -4164267397172923639LL;
int zero = 0;
unsigned long long int var_13 = 12548076288684364826ULL;
long long int var_14 = 207484428882401295LL;
void init() {
}

void checksum() {
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
