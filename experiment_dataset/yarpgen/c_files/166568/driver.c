#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
signed char var_4 = (signed char)59;
long long int var_10 = -6189787543225095365LL;
unsigned short var_11 = (unsigned short)25506;
long long int var_12 = 5186499560394361434LL;
int zero = 0;
long long int var_14 = -6228159549184976771LL;
signed char var_15 = (signed char)54;
long long int var_16 = 4605842304017173977LL;
long long int var_17 = 1337978457780390166LL;
unsigned short var_18 = (unsigned short)53497;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
