#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_5 = 1355379830;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-54;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)116;
unsigned long long int var_14 = 5790114726408787806ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
