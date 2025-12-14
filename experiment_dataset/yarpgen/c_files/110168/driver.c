#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1281820562;
int var_1 = -868034326;
signed char var_3 = (signed char)94;
signed char var_6 = (signed char)-26;
unsigned int var_7 = 1304947893U;
signed char var_8 = (signed char)34;
unsigned long long int var_10 = 5559567411573131925ULL;
int zero = 0;
unsigned int var_13 = 1737709309U;
unsigned long long int var_14 = 2024718809485035265ULL;
unsigned short var_15 = (unsigned short)37361;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
