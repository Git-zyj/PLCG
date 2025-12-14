#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14399;
short var_3 = (short)5800;
unsigned long long int var_4 = 11327531944412665483ULL;
long long int var_5 = 7986252856693894122LL;
unsigned char var_6 = (unsigned char)254;
unsigned short var_11 = (unsigned short)47867;
int zero = 0;
short var_14 = (short)32313;
unsigned int var_15 = 1893585216U;
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
