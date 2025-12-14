#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1342235923;
unsigned long long int var_1 = 4615268002096698046ULL;
unsigned long long int var_2 = 12368080230846766867ULL;
unsigned int var_3 = 3684678987U;
unsigned long long int var_4 = 8940709704527040626ULL;
unsigned long long int var_5 = 6089570681970736439ULL;
unsigned long long int var_7 = 16828596657152976625ULL;
short var_8 = (short)7405;
unsigned long long int var_9 = 6267665675383669928ULL;
int zero = 0;
signed char var_10 = (signed char)74;
long long int var_11 = -6855953585519316491LL;
int var_12 = 802730743;
int var_13 = 494663006;
int var_14 = 1011362313;
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
