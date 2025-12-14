#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7565335128974812290ULL;
short var_1 = (short)1517;
long long int var_7 = -444600648965394232LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 11086264484261920031ULL;
unsigned int var_11 = 3154733967U;
int zero = 0;
unsigned long long int var_12 = 13262207637679549676ULL;
unsigned long long int var_13 = 10481057592871845352ULL;
short var_14 = (short)9640;
unsigned short var_15 = (unsigned short)56042;
long long int var_16 = 4205820133370107879LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
