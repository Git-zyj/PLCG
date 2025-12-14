#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1849400577942475078LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 3925477404U;
long long int var_13 = -6636888301751143902LL;
unsigned int var_14 = 3349654103U;
int zero = 0;
int var_19 = -1819982229;
short var_20 = (short)-6236;
unsigned short var_21 = (unsigned short)53031;
unsigned int var_22 = 889895558U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
