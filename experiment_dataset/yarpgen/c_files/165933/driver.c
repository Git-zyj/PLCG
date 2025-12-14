#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)93;
unsigned char var_5 = (unsigned char)224;
signed char var_6 = (signed char)-106;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 11464366078724716219ULL;
int var_15 = -66128177;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
