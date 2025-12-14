#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12515845329202261055ULL;
unsigned long long int var_6 = 18197997019635123166ULL;
unsigned long long int var_9 = 9088491393506093433ULL;
unsigned long long int var_10 = 15455657308579999703ULL;
unsigned long long int var_11 = 2195393197005976723ULL;
unsigned long long int var_13 = 17585132584908553888ULL;
int zero = 0;
unsigned long long int var_16 = 9677129602327457338ULL;
unsigned long long int var_17 = 5912664224907172213ULL;
unsigned long long int var_18 = 14238351538989009651ULL;
unsigned long long int var_19 = 8038895710132461538ULL;
unsigned long long int var_20 = 11994073283518866498ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
