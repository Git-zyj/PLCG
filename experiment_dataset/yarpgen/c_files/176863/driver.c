#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58964;
int var_3 = 1181387789;
unsigned long long int var_4 = 5334360515717126152ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 12327748257281277939ULL;
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
