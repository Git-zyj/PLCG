#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3863219804U;
unsigned short var_3 = (unsigned short)28665;
unsigned char var_5 = (unsigned char)87;
signed char var_11 = (signed char)123;
unsigned long long int var_12 = 3228914012426351893ULL;
unsigned long long int var_13 = 8412858839163396658ULL;
int zero = 0;
signed char var_20 = (signed char)-18;
unsigned short var_21 = (unsigned short)1382;
unsigned int var_22 = 700922256U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
