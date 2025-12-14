#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)10587;
long long int var_5 = -9193992767044778893LL;
unsigned long long int var_7 = 8401871795181174608ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)9578;
signed char var_16 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
