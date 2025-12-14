#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1145625058356152166LL;
unsigned long long int var_6 = 1272569144395794087ULL;
long long int var_8 = -1144685013927081569LL;
unsigned long long int var_11 = 2645682576932607334ULL;
int zero = 0;
unsigned int var_16 = 384466951U;
long long int var_17 = 7314678366969263354LL;
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
