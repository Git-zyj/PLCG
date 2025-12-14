#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24504;
unsigned int var_1 = 2374598229U;
unsigned long long int var_7 = 3872730900051265062ULL;
long long int var_8 = -5351333143163632648LL;
signed char var_9 = (signed char)7;
int zero = 0;
short var_10 = (short)14591;
unsigned long long int var_11 = 1624447188656282638ULL;
unsigned int var_12 = 1495734948U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
