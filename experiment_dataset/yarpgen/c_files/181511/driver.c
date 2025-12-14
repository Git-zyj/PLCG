#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7341002914927144199LL;
short var_9 = (short)-11560;
signed char var_13 = (signed char)-76;
long long int var_15 = -5406819971466864181LL;
int zero = 0;
short var_16 = (short)24543;
long long int var_17 = 6967929312212318099LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
