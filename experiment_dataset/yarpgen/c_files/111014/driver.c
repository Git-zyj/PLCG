#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8845356230312171715ULL;
signed char var_4 = (signed char)26;
unsigned long long int var_8 = 4714397539320849814ULL;
unsigned long long int var_9 = 4229923147912959452ULL;
short var_11 = (short)-32223;
int zero = 0;
short var_14 = (short)1183;
unsigned int var_15 = 744439399U;
unsigned short var_16 = (unsigned short)6474;
unsigned long long int var_17 = 7345523749918202110ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
