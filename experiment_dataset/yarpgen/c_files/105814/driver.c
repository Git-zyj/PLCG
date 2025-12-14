#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1844248867U;
short var_3 = (short)-21534;
short var_7 = (short)-32631;
short var_10 = (short)5001;
short var_12 = (short)-30873;
unsigned int var_16 = 762830555U;
int zero = 0;
signed char var_17 = (signed char)-74;
signed char var_18 = (signed char)-92;
long long int var_19 = 50054482811692154LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
