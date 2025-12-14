#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8863160266838892613ULL;
unsigned short var_8 = (unsigned short)16919;
long long int var_12 = 8253847275202428148LL;
int zero = 0;
unsigned long long int var_13 = 3269127537085777077ULL;
int var_14 = 958327278;
int var_15 = -565098764;
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
