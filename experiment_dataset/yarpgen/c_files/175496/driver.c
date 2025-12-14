#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1407475911;
long long int var_10 = -8100105376701736040LL;
short var_11 = (short)20102;
int zero = 0;
unsigned char var_12 = (unsigned char)145;
unsigned long long int var_13 = 7249575806496234545ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
