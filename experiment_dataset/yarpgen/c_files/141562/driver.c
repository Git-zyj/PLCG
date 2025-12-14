#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5664142333056030427LL;
signed char var_8 = (signed char)31;
int zero = 0;
long long int var_10 = 1991423553440132716LL;
unsigned char var_11 = (unsigned char)188;
unsigned char var_12 = (unsigned char)126;
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
