#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-57;
unsigned long long int var_3 = 7943648468133824593ULL;
long long int var_4 = 1588298715377229289LL;
unsigned short var_7 = (unsigned short)20000;
unsigned short var_8 = (unsigned short)15059;
long long int var_15 = -2466198197575009555LL;
int zero = 0;
unsigned short var_20 = (unsigned short)52440;
int var_21 = 1297318030;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
