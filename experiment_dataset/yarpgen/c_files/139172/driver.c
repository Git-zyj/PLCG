#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-21;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 1031736552U;
int var_11 = 1944161652;
unsigned long long int var_14 = 13907300376933576858ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 15962049530798663025ULL;
signed char var_20 = (signed char)81;
void init() {
}

void checksum() {
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
