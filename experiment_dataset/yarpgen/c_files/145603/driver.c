#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20223;
int var_3 = 1307008737;
int var_7 = -1734340421;
short var_9 = (short)-2652;
int var_11 = 1561473229;
long long int var_12 = -3895651782847601914LL;
int zero = 0;
signed char var_13 = (signed char)-75;
int var_14 = 1215801843;
short var_15 = (short)32655;
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
