#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8671897982652034530ULL;
long long int var_3 = -3785920256844805035LL;
unsigned short var_4 = (unsigned short)47451;
long long int var_6 = -8509211898924585000LL;
unsigned char var_8 = (unsigned char)4;
long long int var_9 = 1675327721485667862LL;
unsigned short var_13 = (unsigned short)45216;
int zero = 0;
unsigned char var_16 = (unsigned char)17;
long long int var_17 = -4648055125693538642LL;
unsigned int var_18 = 2823208615U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
