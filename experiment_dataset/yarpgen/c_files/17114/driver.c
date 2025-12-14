#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -2380284868115515892LL;
long long int var_13 = 2876809922734010597LL;
long long int var_16 = 1245594578465868373LL;
int zero = 0;
unsigned int var_17 = 290087113U;
unsigned int var_18 = 1933934015U;
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
