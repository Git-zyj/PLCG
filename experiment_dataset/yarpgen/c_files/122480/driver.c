#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7670542794073658972LL;
long long int var_1 = -2181936506645563102LL;
unsigned long long int var_2 = 2356114462374569738ULL;
short var_3 = (short)14491;
short var_4 = (short)-1771;
int var_9 = 1204292402;
unsigned long long int var_12 = 17376188598115647143ULL;
int var_13 = 1034028804;
unsigned short var_14 = (unsigned short)61837;
int zero = 0;
unsigned char var_20 = (unsigned char)216;
_Bool var_21 = (_Bool)0;
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
