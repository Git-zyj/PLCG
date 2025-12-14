#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 965430794270862706ULL;
unsigned long long int var_5 = 6186971082130392685ULL;
short var_7 = (short)-5440;
unsigned long long int var_8 = 4585215046337310284ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 15912867085990858654ULL;
unsigned long long int var_15 = 4714614248873202252ULL;
int var_16 = -1748753028;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 5469182996228123494ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
