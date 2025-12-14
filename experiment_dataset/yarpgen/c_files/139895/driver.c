#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5319061777715233007ULL;
unsigned int var_6 = 3778028848U;
int var_12 = 1162076613;
unsigned int var_19 = 3484417834U;
int zero = 0;
unsigned int var_20 = 1641084068U;
long long int var_21 = -8598268221936970219LL;
long long int var_22 = -8062156000793781795LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
