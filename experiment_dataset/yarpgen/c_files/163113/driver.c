#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1809149828;
short var_4 = (short)-1613;
_Bool var_5 = (_Bool)0;
int var_7 = -1399767632;
unsigned int var_10 = 1516126279U;
unsigned int var_13 = 704911664U;
int zero = 0;
long long int var_17 = -344847562738035462LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
