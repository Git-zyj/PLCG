#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1627675490;
unsigned short var_3 = (unsigned short)36690;
unsigned long long int var_4 = 3464384242853360963ULL;
unsigned char var_7 = (unsigned char)252;
signed char var_9 = (signed char)79;
signed char var_10 = (signed char)27;
unsigned long long int var_11 = 5721218137753279029ULL;
int zero = 0;
int var_13 = -398848002;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
