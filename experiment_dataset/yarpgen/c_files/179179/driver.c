#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-71;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-33;
signed char var_5 = (signed char)49;
int var_8 = 817212622;
unsigned long long int var_10 = 1947844290468633659ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-54;
unsigned long long int var_13 = 17650762258686341397ULL;
unsigned long long int var_14 = 1101883606919062058ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
