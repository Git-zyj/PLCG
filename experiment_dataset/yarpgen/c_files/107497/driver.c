#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10379997152006145797ULL;
long long int var_2 = 3261525106668880108LL;
unsigned long long int var_10 = 893593487099257817ULL;
int zero = 0;
int var_18 = -2031617689;
unsigned long long int var_19 = 10862884525764589427ULL;
unsigned long long int var_20 = 4188737336175764321ULL;
void init() {
}

void checksum() {
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
