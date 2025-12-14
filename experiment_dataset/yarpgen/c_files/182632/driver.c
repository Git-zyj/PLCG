#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14208748794774784752ULL;
unsigned char var_8 = (unsigned char)25;
int zero = 0;
long long int var_11 = 94125555418106462LL;
long long int var_12 = 2897712035232243167LL;
long long int var_13 = 2402699195001065721LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
