#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 372051858U;
unsigned int var_2 = 3523992558U;
unsigned char var_4 = (unsigned char)18;
long long int var_6 = 8511301400740402360LL;
unsigned long long int var_7 = 9118615357255989540ULL;
signed char var_9 = (signed char)-112;
int zero = 0;
unsigned long long int var_10 = 3810470937008109391ULL;
int var_11 = -443791126;
unsigned long long int var_12 = 16224723108914554774ULL;
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
