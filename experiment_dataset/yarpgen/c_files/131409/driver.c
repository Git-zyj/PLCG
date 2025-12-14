#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
long long int var_10 = -3371650687122738606LL;
int zero = 0;
short var_20 = (short)22116;
unsigned long long int var_21 = 16376769492303973553ULL;
signed char var_22 = (signed char)81;
unsigned long long int var_23 = 3925866788833802022ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
