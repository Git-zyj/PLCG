#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1557661709;
unsigned char var_3 = (unsigned char)101;
int var_7 = 1531387843;
int var_11 = -1529301737;
int zero = 0;
unsigned short var_14 = (unsigned short)31454;
int var_15 = 1038126757;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
