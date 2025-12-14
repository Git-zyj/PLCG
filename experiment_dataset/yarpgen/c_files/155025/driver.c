#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 788325316390604470ULL;
unsigned long long int var_3 = 7602580745951290926ULL;
unsigned long long int var_5 = 16660866831805205620ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 6114390731621630853ULL;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 13678220351400442383ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 10049255905974089490ULL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
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
