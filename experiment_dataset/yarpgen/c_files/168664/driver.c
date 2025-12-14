#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)12;
unsigned char var_1 = (unsigned char)101;
int var_2 = -2072606756;
unsigned long long int var_4 = 15814881682326952131ULL;
long long int var_5 = 47825488372591019LL;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)224;
signed char var_12 = (signed char)78;
signed char var_14 = (signed char)34;
int zero = 0;
long long int var_17 = 588212620278017931LL;
unsigned int var_18 = 680465995U;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
