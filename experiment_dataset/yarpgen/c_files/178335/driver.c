#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5641;
short var_8 = (short)27011;
unsigned long long int var_9 = 15874008577138405507ULL;
int zero = 0;
long long int var_13 = 4703536150567890813LL;
_Bool var_14 = (_Bool)0;
int var_15 = -1795699971;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
