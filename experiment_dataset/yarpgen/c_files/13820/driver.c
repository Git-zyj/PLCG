#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 318680650U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_9 = 1301633595427773428ULL;
unsigned long long int var_10 = 12301870668455302824ULL;
short var_11 = (short)13629;
long long int var_13 = 6786819853257027719LL;
long long int var_14 = -61178372274277923LL;
int zero = 0;
unsigned long long int var_15 = 11573180965306505992ULL;
long long int var_16 = 6052134002796302303LL;
short var_17 = (short)-30654;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
