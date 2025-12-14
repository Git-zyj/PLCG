#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4899746826740348062ULL;
unsigned long long int var_2 = 1824189729111085063ULL;
short var_3 = (short)17029;
unsigned long long int var_8 = 9120053618222436346ULL;
int zero = 0;
unsigned long long int var_17 = 9518688504674964816ULL;
short var_18 = (short)19657;
unsigned char var_19 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
