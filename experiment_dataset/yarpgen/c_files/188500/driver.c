#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)239;
long long int var_7 = -8956877637483295277LL;
short var_9 = (short)25457;
unsigned long long int var_10 = 16887546141625504641ULL;
unsigned char var_11 = (unsigned char)151;
int zero = 0;
signed char var_12 = (signed char)4;
int var_13 = 2128480270;
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
