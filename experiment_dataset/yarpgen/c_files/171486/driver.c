#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1293708741U;
unsigned int var_4 = 202586506U;
int var_7 = -1883999559;
long long int var_9 = 1552666691657611981LL;
int zero = 0;
long long int var_12 = -8090967653344425239LL;
signed char var_13 = (signed char)-120;
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
