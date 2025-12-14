#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9100321203387349790ULL;
unsigned long long int var_6 = 11023381710031510696ULL;
unsigned long long int var_7 = 6534784407840631999ULL;
unsigned long long int var_8 = 13865519903437255896ULL;
unsigned long long int var_10 = 14289481905252231771ULL;
int zero = 0;
unsigned long long int var_14 = 801376640841555041ULL;
unsigned long long int var_15 = 7291055295320546168ULL;
unsigned long long int var_16 = 478199017105746905ULL;
unsigned long long int var_17 = 15486032048373094556ULL;
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
