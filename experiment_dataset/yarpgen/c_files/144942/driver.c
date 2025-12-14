#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
unsigned long long int var_1 = 3733939804760886635ULL;
signed char var_4 = (signed char)-34;
unsigned long long int var_5 = 13511512564045358287ULL;
long long int var_12 = -8703168377640228856LL;
signed char var_13 = (signed char)-96;
unsigned short var_17 = (unsigned short)59058;
unsigned long long int var_18 = 3287621617857707868ULL;
int zero = 0;
int var_20 = -205031084;
int var_21 = 1437250560;
signed char var_22 = (signed char)66;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
