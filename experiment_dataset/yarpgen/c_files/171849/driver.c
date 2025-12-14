#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2392115571642225223LL;
long long int var_4 = 5370955589252519128LL;
long long int var_5 = 2240651075717063719LL;
unsigned int var_7 = 3887212073U;
unsigned int var_8 = 2702355255U;
long long int var_10 = -1484701414819650605LL;
unsigned int var_11 = 3227606411U;
unsigned int var_12 = 449329865U;
unsigned int var_13 = 474003782U;
long long int var_15 = 3711270506490255252LL;
int zero = 0;
unsigned int var_16 = 2025552746U;
long long int var_17 = -5678861567072061706LL;
unsigned int var_18 = 3712639555U;
long long int var_19 = 6993234649988603288LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
