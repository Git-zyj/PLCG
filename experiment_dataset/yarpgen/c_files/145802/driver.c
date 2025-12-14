#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7260072246467264182LL;
unsigned short var_5 = (unsigned short)32341;
long long int var_8 = -8201288151437759197LL;
unsigned long long int var_9 = 14354145077899599036ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)34415;
signed char var_13 = (signed char)-59;
void init() {
}

void checksum() {
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
