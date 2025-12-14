#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 576624526U;
long long int var_2 = 2358799542727714259LL;
int var_9 = 818437632;
unsigned int var_11 = 3771852893U;
long long int var_12 = 5225253731919466417LL;
int zero = 0;
signed char var_13 = (signed char)74;
long long int var_14 = 5927791948249258108LL;
long long int var_15 = 3633671531177571493LL;
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
