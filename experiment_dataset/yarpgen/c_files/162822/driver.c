#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7707073764494267987ULL;
long long int var_4 = 407091671577614387LL;
long long int var_5 = 109494782096481917LL;
unsigned short var_6 = (unsigned short)37646;
short var_8 = (short)-32238;
int zero = 0;
unsigned long long int var_10 = 11497322256689836119ULL;
unsigned short var_11 = (unsigned short)64031;
long long int var_12 = -76366525153460934LL;
long long int var_13 = 6871717866128263108LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
