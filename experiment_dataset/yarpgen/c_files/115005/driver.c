#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -154595623;
int var_6 = 417286703;
int var_8 = 448783938;
unsigned long long int var_12 = 6547889842387045047ULL;
int var_14 = -921914661;
long long int var_15 = 7655217281112962262LL;
int zero = 0;
unsigned short var_17 = (unsigned short)54075;
short var_18 = (short)-6787;
long long int var_19 = -4677652016301900357LL;
void init() {
}

void checksum() {
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
