#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
long long int var_5 = -7965915324623320848LL;
int var_9 = -1363220280;
int var_11 = 2091561976;
unsigned int var_14 = 3295661773U;
int zero = 0;
unsigned int var_17 = 3841960383U;
unsigned short var_18 = (unsigned short)10930;
signed char var_19 = (signed char)71;
void init() {
}

void checksum() {
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
