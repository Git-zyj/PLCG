#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15586530161818602432ULL;
unsigned char var_3 = (unsigned char)105;
unsigned char var_5 = (unsigned char)107;
signed char var_8 = (signed char)107;
int zero = 0;
short var_20 = (short)3476;
long long int var_21 = 8244685233127126052LL;
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
