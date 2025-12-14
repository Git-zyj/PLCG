#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)249;
unsigned long long int var_2 = 17493670411337210925ULL;
unsigned char var_3 = (unsigned char)5;
unsigned long long int var_9 = 16577014661154073641ULL;
long long int var_11 = 1244668545841690381LL;
int var_12 = -963669503;
int zero = 0;
signed char var_13 = (signed char)2;
int var_14 = 1988864994;
int var_15 = -331070036;
long long int var_16 = 6668791579886106199LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
