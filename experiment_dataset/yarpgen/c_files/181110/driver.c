#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2041657738908865048LL;
long long int var_2 = -7967717482220669542LL;
int var_3 = 2032398442;
unsigned short var_5 = (unsigned short)61821;
int var_9 = -1297731083;
long long int var_11 = -3790525297461003144LL;
int var_12 = 803197897;
int zero = 0;
unsigned short var_17 = (unsigned short)10230;
unsigned short var_18 = (unsigned short)35539;
int var_19 = 491940959;
void init() {
}

void checksum() {
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
