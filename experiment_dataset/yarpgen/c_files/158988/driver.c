#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7646364000279540604LL;
long long int var_2 = 4602695053423479527LL;
unsigned long long int var_6 = 15015126555396470018ULL;
signed char var_7 = (signed char)84;
unsigned short var_8 = (unsigned short)38011;
signed char var_10 = (signed char)-59;
unsigned char var_11 = (unsigned char)64;
int zero = 0;
unsigned short var_15 = (unsigned short)38260;
unsigned long long int var_16 = 12632909584576110432ULL;
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
