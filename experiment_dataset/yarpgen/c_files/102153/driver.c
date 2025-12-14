#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7234283631638260387LL;
int var_2 = 1629963088;
unsigned short var_3 = (unsigned short)27227;
unsigned short var_4 = (unsigned short)57140;
int var_9 = 1119082695;
signed char var_16 = (signed char)36;
int zero = 0;
unsigned int var_17 = 779287194U;
unsigned long long int var_18 = 11150794119412292736ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
