#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3861330285770423620LL;
long long int var_7 = 3958188020300514137LL;
long long int var_11 = 8496397193194617209LL;
int var_14 = 2075902990;
int zero = 0;
unsigned char var_19 = (unsigned char)229;
signed char var_20 = (signed char)-37;
signed char var_21 = (signed char)34;
signed char var_22 = (signed char)97;
signed char var_23 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
