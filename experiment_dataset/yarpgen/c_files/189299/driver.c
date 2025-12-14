#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
unsigned short var_4 = (unsigned short)6795;
unsigned char var_7 = (unsigned char)144;
unsigned long long int var_8 = 2453182708746049238ULL;
signed char var_9 = (signed char)-63;
int zero = 0;
int var_10 = -746606711;
unsigned char var_11 = (unsigned char)122;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
