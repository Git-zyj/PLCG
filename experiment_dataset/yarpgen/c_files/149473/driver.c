#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned short var_1 = (unsigned short)13787;
short var_3 = (short)-32077;
signed char var_6 = (signed char)-52;
unsigned long long int var_10 = 18143960311119906339ULL;
int zero = 0;
unsigned long long int var_12 = 4271877202545323013ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
