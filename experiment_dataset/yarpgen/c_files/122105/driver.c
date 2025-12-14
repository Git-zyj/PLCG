#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10124;
unsigned int var_3 = 1879225076U;
long long int var_6 = -2379987961738740795LL;
unsigned short var_9 = (unsigned short)41576;
int zero = 0;
int var_13 = -616995600;
long long int var_14 = 1123658369072274125LL;
unsigned int var_15 = 1102098692U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
