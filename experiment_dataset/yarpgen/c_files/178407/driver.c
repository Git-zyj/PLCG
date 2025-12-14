#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -492978517;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)244;
unsigned long long int var_13 = 17687952872606055338ULL;
int zero = 0;
unsigned int var_15 = 1067581531U;
long long int var_16 = -5483592622660075425LL;
unsigned long long int var_17 = 1195543758886581402ULL;
unsigned long long int var_18 = 8128280434013630512ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
