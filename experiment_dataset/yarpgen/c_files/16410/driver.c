#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7661832385725219616ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_12 = (unsigned char)243;
signed char var_16 = (signed char)40;
int zero = 0;
signed char var_19 = (signed char)113;
unsigned long long int var_20 = 9596351323153411840ULL;
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
