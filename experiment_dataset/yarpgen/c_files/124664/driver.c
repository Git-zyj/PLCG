#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5032138837445067107LL;
unsigned char var_2 = (unsigned char)38;
long long int var_3 = 3998753061535647207LL;
unsigned char var_4 = (unsigned char)173;
long long int var_7 = -5404371796632440817LL;
int zero = 0;
unsigned long long int var_10 = 816393377676663792ULL;
short var_11 = (short)2055;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
