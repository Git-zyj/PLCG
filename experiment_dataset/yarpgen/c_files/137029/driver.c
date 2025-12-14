#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -78194265;
signed char var_8 = (signed char)-101;
short var_10 = (short)-11209;
signed char var_11 = (signed char)19;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 758583224900155022LL;
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
