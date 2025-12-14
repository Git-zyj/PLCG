#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5935735089590976931LL;
short var_5 = (short)-6086;
unsigned long long int var_6 = 6374937092296730568ULL;
int zero = 0;
short var_10 = (short)17907;
unsigned int var_11 = 923620732U;
int var_12 = 1883702411;
unsigned long long int var_13 = 6734198185258956135ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
