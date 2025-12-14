#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)14513;
unsigned long long int var_7 = 842804987691881316ULL;
unsigned long long int var_9 = 17256546730829100557ULL;
int zero = 0;
unsigned long long int var_13 = 695953149298621066ULL;
long long int var_14 = 4537549602368527644LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
