#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16681503888862447347ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_12 = 8961852588581152810ULL;
int zero = 0;
unsigned long long int var_18 = 9938228070839459841ULL;
unsigned long long int var_19 = 16714684719430991620ULL;
unsigned long long int var_20 = 1509755651962058914ULL;
void init() {
}

void checksum() {
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
