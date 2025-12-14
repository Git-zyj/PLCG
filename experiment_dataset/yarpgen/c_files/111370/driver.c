#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22681;
long long int var_2 = -5574337554773833614LL;
long long int var_5 = 415310423082379484LL;
signed char var_7 = (signed char)-14;
int zero = 0;
long long int var_17 = 2318131656428677895LL;
long long int var_18 = 4193700812085384163LL;
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
