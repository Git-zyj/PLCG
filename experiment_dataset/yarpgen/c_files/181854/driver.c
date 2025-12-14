#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34207;
unsigned long long int var_9 = 17509470892426154777ULL;
short var_11 = (short)-30463;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)17664;
signed char var_20 = (signed char)-88;
unsigned long long int var_21 = 301800414011502089ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
