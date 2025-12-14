#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 700291819U;
signed char var_2 = (signed char)-1;
unsigned long long int var_5 = 6864277685089790840ULL;
unsigned int var_8 = 511291379U;
int var_9 = -559276472;
unsigned char var_10 = (unsigned char)39;
long long int var_11 = 9121200131416357271LL;
int var_13 = 15541441;
_Bool var_15 = (_Bool)0;
int var_16 = -2126999137;
int zero = 0;
unsigned long long int var_17 = 14596151825048868630ULL;
unsigned int var_18 = 1437516170U;
unsigned long long int var_19 = 3314956433592195878ULL;
unsigned char var_20 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
