#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17327398445481398400ULL;
unsigned char var_3 = (unsigned char)160;
long long int var_6 = -8489645989193917245LL;
long long int var_7 = 1961785484625882115LL;
signed char var_10 = (signed char)35;
unsigned int var_11 = 3411442511U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 3354639869365543026ULL;
int zero = 0;
unsigned long long int var_17 = 3708449550131640605ULL;
long long int var_18 = -2828969803260864559LL;
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
