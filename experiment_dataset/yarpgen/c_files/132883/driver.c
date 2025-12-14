#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)115;
unsigned short var_3 = (unsigned short)51712;
int var_5 = -129227204;
long long int var_12 = -9091753182556278588LL;
int zero = 0;
short var_14 = (short)23829;
unsigned long long int var_15 = 767674212673601939ULL;
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
