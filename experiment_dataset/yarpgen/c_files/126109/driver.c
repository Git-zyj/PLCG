#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4582001015729711113LL;
int var_3 = 484542717;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3277557181U;
_Bool var_15 = (_Bool)1;
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
