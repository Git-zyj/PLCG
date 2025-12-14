#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3613426722067355184LL;
short var_1 = (short)30193;
unsigned short var_2 = (unsigned short)60569;
signed char var_4 = (signed char)-28;
unsigned long long int var_6 = 17750667648706497687ULL;
unsigned long long int var_9 = 6622759303303131108ULL;
unsigned long long int var_10 = 8858075647885476071ULL;
unsigned long long int var_11 = 4367463123016471312ULL;
int zero = 0;
signed char var_13 = (signed char)-70;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1806285621U;
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
