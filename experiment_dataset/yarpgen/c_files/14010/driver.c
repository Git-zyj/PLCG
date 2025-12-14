#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)103;
long long int var_13 = 1621285755096508956LL;
signed char var_14 = (signed char)59;
int zero = 0;
unsigned long long int var_19 = 5524352449183368094ULL;
long long int var_20 = -6830241343188305126LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
