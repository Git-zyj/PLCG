#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3824073311884130248LL;
short var_1 = (short)-7220;
long long int var_3 = 8379160288008637639LL;
short var_4 = (short)9379;
long long int var_5 = 3132056343587377806LL;
long long int var_6 = -1573417324190056750LL;
signed char var_7 = (signed char)-61;
long long int var_8 = 1467000477035748573LL;
int zero = 0;
short var_10 = (short)-29705;
signed char var_11 = (signed char)-58;
short var_12 = (short)11037;
signed char var_13 = (signed char)59;
long long int var_14 = 2413871865985112919LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
