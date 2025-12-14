#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1753615430288646155LL;
_Bool var_3 = (_Bool)0;
signed char var_15 = (signed char)-10;
signed char var_17 = (signed char)-96;
int zero = 0;
long long int var_18 = -1369227737535857304LL;
long long int var_19 = -3928835885873438207LL;
unsigned short var_20 = (unsigned short)52809;
unsigned short var_21 = (unsigned short)9077;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
