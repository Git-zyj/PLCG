#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14110050627741777376ULL;
int var_4 = 831197763;
int var_8 = -1103520700;
unsigned short var_11 = (unsigned short)62510;
unsigned long long int var_14 = 4879397785015469331ULL;
int zero = 0;
short var_15 = (short)25124;
long long int var_16 = 8690728117547706044LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
