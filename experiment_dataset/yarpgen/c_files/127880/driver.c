#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-15749;
long long int var_11 = -2220604735891525074LL;
int zero = 0;
unsigned long long int var_20 = 5894852418164332188ULL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-28562;
unsigned long long int var_23 = 4328323908820082802ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
