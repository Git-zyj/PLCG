#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8141042065197505775LL;
unsigned char var_4 = (unsigned char)41;
unsigned long long int var_9 = 13476410125075501461ULL;
long long int var_10 = -1724324999266425017LL;
int zero = 0;
unsigned char var_12 = (unsigned char)166;
unsigned long long int var_13 = 7306297998997993756ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
