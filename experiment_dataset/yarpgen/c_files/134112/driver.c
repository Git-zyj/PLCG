#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64994;
long long int var_1 = 3925270419661990519LL;
long long int var_2 = -995532452639953066LL;
int var_4 = 114291817;
unsigned long long int var_5 = 2765313122387701529ULL;
int var_6 = -407326292;
signed char var_7 = (signed char)110;
unsigned long long int var_8 = 13322017484594069245ULL;
int var_9 = 455967571;
int zero = 0;
signed char var_10 = (signed char)-33;
unsigned short var_11 = (unsigned short)12932;
short var_12 = (short)-13965;
int var_13 = 1401085180;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
