#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -462332095196772859LL;
int var_2 = -1414232157;
signed char var_4 = (signed char)-14;
signed char var_5 = (signed char)60;
long long int var_11 = 458579460230480614LL;
unsigned long long int var_13 = 7048900839937228084ULL;
int zero = 0;
int var_14 = 95480314;
unsigned long long int var_15 = 8087078093507120996ULL;
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
