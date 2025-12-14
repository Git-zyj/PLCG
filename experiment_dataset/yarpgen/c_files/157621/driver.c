#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2550;
unsigned long long int var_4 = 3005883527962350823ULL;
signed char var_8 = (signed char)79;
int var_9 = -1474036510;
short var_14 = (short)-6763;
int zero = 0;
unsigned long long int var_15 = 2991001783865639891ULL;
unsigned long long int var_16 = 9382282641518717579ULL;
long long int var_17 = 8560356575769904635LL;
signed char var_18 = (signed char)-71;
unsigned char var_19 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
