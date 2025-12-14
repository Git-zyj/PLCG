#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1359295678199868456LL;
long long int var_1 = -4216660418968205394LL;
long long int var_3 = 611951186847369027LL;
long long int var_5 = 3327473637409285037LL;
long long int var_8 = 1016557386567800688LL;
long long int var_11 = 2071809680232146585LL;
long long int var_13 = 8389422429798925004LL;
int zero = 0;
long long int var_17 = 6613747912927815932LL;
long long int var_18 = 2130228511576097105LL;
long long int var_19 = -2782629429509573123LL;
long long int var_20 = -6314811876246399018LL;
long long int var_21 = -392782003568740928LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
