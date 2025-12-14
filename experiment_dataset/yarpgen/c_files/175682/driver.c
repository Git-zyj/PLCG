#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9701150066753136409ULL;
_Bool var_10 = (_Bool)1;
long long int var_11 = -2116913779525054050LL;
unsigned char var_13 = (unsigned char)197;
int zero = 0;
int var_16 = 1248663110;
long long int var_17 = 724689613819260922LL;
unsigned short var_18 = (unsigned short)23912;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
