#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 818792410U;
unsigned long long int var_3 = 17429217395235934146ULL;
unsigned int var_5 = 1272218399U;
int var_6 = -2055954518;
unsigned int var_8 = 3783527777U;
unsigned int var_10 = 2061711010U;
unsigned int var_11 = 3753796988U;
int zero = 0;
unsigned int var_12 = 1204417646U;
signed char var_13 = (signed char)-125;
long long int var_14 = 979153994887438464LL;
void init() {
}

void checksum() {
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
