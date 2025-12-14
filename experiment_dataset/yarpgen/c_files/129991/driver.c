#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24543;
unsigned int var_2 = 743950040U;
unsigned char var_7 = (unsigned char)185;
int zero = 0;
unsigned long long int var_13 = 11251572678769525300ULL;
short var_14 = (short)6164;
unsigned long long int var_15 = 948886150744217699ULL;
long long int var_16 = 8776709057647952173LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
