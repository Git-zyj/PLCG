#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5330001640360668418LL;
long long int var_1 = -1296492554550297274LL;
long long int var_3 = -377477370706809637LL;
signed char var_4 = (signed char)-76;
signed char var_6 = (signed char)24;
long long int var_7 = -8729505433451327410LL;
signed char var_8 = (signed char)-45;
signed char var_9 = (signed char)-35;
long long int var_11 = 3177374172453710878LL;
int zero = 0;
signed char var_12 = (signed char)-96;
signed char var_13 = (signed char)89;
long long int var_14 = 1967998483432303447LL;
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
