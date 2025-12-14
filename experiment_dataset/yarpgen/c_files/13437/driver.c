#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -146696155;
long long int var_5 = 5433005365535639555LL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)33;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)105;
signed char var_13 = (signed char)-33;
signed char var_14 = (signed char)82;
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
