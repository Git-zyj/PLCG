#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8670067314627020581ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_7 = 1184019764U;
unsigned short var_10 = (unsigned short)28523;
int zero = 0;
unsigned long long int var_15 = 13250687840543745405ULL;
unsigned short var_16 = (unsigned short)55240;
unsigned char var_17 = (unsigned char)45;
unsigned int var_18 = 2271196296U;
unsigned long long int var_19 = 459143429438512103ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
