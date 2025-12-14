#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-3442;
unsigned long long int var_7 = 14313087460157448671ULL;
long long int var_8 = -7584942269731760882LL;
int var_11 = 114857355;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = 1413305324;
int var_14 = -930566474;
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
