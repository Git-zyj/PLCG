#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29363;
short var_3 = (short)-9142;
unsigned long long int var_4 = 5630223621696245977ULL;
unsigned long long int var_5 = 13021480402390269291ULL;
unsigned long long int var_6 = 12508104107503685320ULL;
unsigned long long int var_7 = 14359733979175762733ULL;
unsigned long long int var_8 = 4808765665544266499ULL;
int zero = 0;
unsigned long long int var_12 = 3815519238738237231ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3258522605U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
