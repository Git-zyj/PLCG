#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3814293251216212365ULL;
unsigned int var_2 = 598614100U;
int var_4 = -388142263;
short var_5 = (short)18822;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)30624;
unsigned char var_11 = (unsigned char)199;
unsigned short var_12 = (unsigned short)60026;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
