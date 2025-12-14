#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 350779884U;
signed char var_1 = (signed char)-16;
unsigned long long int var_2 = 3705675787506128800ULL;
unsigned int var_3 = 1333002135U;
short var_8 = (short)16247;
int zero = 0;
long long int var_14 = 8325440735942132567LL;
int var_15 = -1581009153;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
