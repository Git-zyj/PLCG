#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)13061;
unsigned long long int var_12 = 15477937186262036285ULL;
signed char var_14 = (signed char)57;
int zero = 0;
signed char var_16 = (signed char)-38;
long long int var_17 = -6200430233624211321LL;
unsigned short var_18 = (unsigned short)38244;
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
