#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 846816932280439841LL;
int var_3 = -683674301;
int zero = 0;
short var_15 = (short)26694;
unsigned char var_16 = (unsigned char)174;
unsigned short var_17 = (unsigned short)9834;
unsigned long long int var_18 = 11930989059672922684ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
