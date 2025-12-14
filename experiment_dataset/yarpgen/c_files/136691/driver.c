#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 951446662U;
short var_3 = (short)851;
long long int var_5 = -682078036426268951LL;
long long int var_7 = -6895119721723758666LL;
unsigned int var_8 = 658091420U;
unsigned long long int var_9 = 9456945310829580517ULL;
int zero = 0;
long long int var_12 = -388918426446714670LL;
unsigned char var_13 = (unsigned char)166;
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
