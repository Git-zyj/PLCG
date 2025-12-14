#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1039398287;
short var_6 = (short)-10287;
unsigned short var_7 = (unsigned short)27290;
long long int var_10 = -821936174301102539LL;
int zero = 0;
unsigned char var_11 = (unsigned char)67;
unsigned int var_12 = 3664804082U;
unsigned long long int var_13 = 17555039818965046172ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
