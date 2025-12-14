#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)81;
unsigned long long int var_6 = 13130791978188856796ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_11 = 3245500693042063489ULL;
int var_14 = 1004683198;
int zero = 0;
int var_18 = 1795390011;
unsigned long long int var_19 = 15191329200975467005ULL;
void init() {
}

void checksum() {
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
