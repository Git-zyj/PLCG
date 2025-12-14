#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6083413124408597227ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -6998228231386341327LL;
int var_8 = -1578563696;
_Bool var_9 = (_Bool)1;
int var_11 = 1969817868;
int zero = 0;
unsigned int var_13 = 3635991359U;
int var_14 = 1242812727;
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
