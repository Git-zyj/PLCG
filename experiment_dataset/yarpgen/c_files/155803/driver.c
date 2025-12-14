#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1327199998;
int var_7 = 1313793781;
unsigned short var_8 = (unsigned short)18665;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -1928744558;
long long int var_12 = 649574042018537037LL;
int var_13 = 1517677515;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
