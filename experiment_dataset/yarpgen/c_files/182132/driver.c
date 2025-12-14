#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2198732428U;
unsigned char var_4 = (unsigned char)59;
short var_5 = (short)3136;
unsigned long long int var_7 = 1486143551614087818ULL;
long long int var_12 = -7347528348087667758LL;
short var_13 = (short)-12018;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -423451886;
void init() {
}

void checksum() {
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
