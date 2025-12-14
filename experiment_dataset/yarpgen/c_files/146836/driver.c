#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3293456308593318419LL;
unsigned short var_8 = (unsigned short)10025;
unsigned long long int var_11 = 1268258363896563799ULL;
int zero = 0;
short var_19 = (short)15546;
int var_20 = -50208439;
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
