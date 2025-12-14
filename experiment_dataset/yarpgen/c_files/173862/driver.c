#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
long long int var_3 = -4076638778787247212LL;
signed char var_6 = (signed char)-118;
long long int var_10 = -3975126629518376415LL;
unsigned short var_11 = (unsigned short)18487;
short var_16 = (short)29821;
int var_17 = 66177646;
int zero = 0;
signed char var_18 = (signed char)-64;
unsigned long long int var_19 = 13512987830186763522ULL;
unsigned long long int var_20 = 14856431311297832842ULL;
int var_21 = -1990450037;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
