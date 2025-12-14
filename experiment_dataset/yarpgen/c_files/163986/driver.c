#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7300365453905153814LL;
long long int var_4 = -8644209169267394999LL;
long long int var_6 = 5323701384459547760LL;
long long int var_7 = -8746856407758356665LL;
long long int var_12 = -3812180141099442295LL;
int zero = 0;
long long int var_14 = -7563217102211795174LL;
long long int var_15 = 5819903540999469266LL;
long long int var_16 = 3280146733689057731LL;
long long int var_17 = 7878052404670760569LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
