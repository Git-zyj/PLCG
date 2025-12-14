#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -8438750;
long long int var_5 = -3537697669586560224LL;
unsigned long long int var_11 = 12945520760219441069ULL;
short var_14 = (short)-107;
int var_15 = -1126194775;
long long int var_17 = 2285387883164301800LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 593321420;
unsigned long long int var_20 = 6125704169930807260ULL;
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
