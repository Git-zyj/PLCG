#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5234411733895260411LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 10642289359875245425ULL;
int zero = 0;
int var_14 = 1489077038;
signed char var_15 = (signed char)19;
signed char var_16 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
