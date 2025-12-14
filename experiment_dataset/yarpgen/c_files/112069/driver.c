#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1305676569;
long long int var_5 = 6527718663993155219LL;
signed char var_8 = (signed char)127;
short var_10 = (short)16927;
int zero = 0;
short var_12 = (short)9971;
unsigned long long int var_13 = 8532121525899264883ULL;
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
