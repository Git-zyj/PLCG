#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50957;
unsigned int var_3 = 593391082U;
short var_9 = (short)2633;
signed char var_13 = (signed char)-19;
long long int var_14 = 2909774648633637966LL;
int zero = 0;
short var_20 = (short)15833;
unsigned long long int var_21 = 16395562967742054887ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
