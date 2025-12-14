#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)34067;
unsigned int var_15 = 2003367691U;
unsigned short var_17 = (unsigned short)41710;
unsigned long long int var_18 = 13318040532466402151ULL;
int zero = 0;
unsigned int var_20 = 2758154570U;
short var_21 = (short)15273;
unsigned long long int var_22 = 902883951161518401ULL;
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
