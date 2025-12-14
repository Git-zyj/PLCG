#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13201428226030867870ULL;
long long int var_3 = 2691676603229654148LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)1362;
unsigned long long int var_17 = 15106594285511995268ULL;
short var_18 = (short)5302;
int var_19 = 2141370587;
int zero = 0;
short var_20 = (short)20807;
unsigned char var_21 = (unsigned char)156;
int var_22 = -1736194413;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
