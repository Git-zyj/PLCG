#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16894;
unsigned long long int var_5 = 4252583522112634617ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_10 = 14165497371507866419ULL;
int zero = 0;
short var_11 = (short)26005;
unsigned long long int var_12 = 9137523065436387911ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
