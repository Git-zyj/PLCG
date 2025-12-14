#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5038589556145442883LL;
unsigned long long int var_7 = 18399774177282031551ULL;
unsigned long long int var_8 = 17093793531436901720ULL;
unsigned long long int var_9 = 5058739823970844985ULL;
int zero = 0;
signed char var_18 = (signed char)53;
unsigned short var_19 = (unsigned short)52552;
unsigned long long int var_20 = 3368849929991861065ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
