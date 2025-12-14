#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26396;
_Bool var_2 = (_Bool)0;
int var_4 = 1881254551;
int var_5 = 1581350066;
int zero = 0;
unsigned long long int var_11 = 16529981789507702787ULL;
unsigned long long int var_12 = 1370281089515374215ULL;
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
