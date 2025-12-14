#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1842945826U;
unsigned int var_2 = 2467770167U;
short var_4 = (short)2121;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-57;
long long int var_11 = 3998630161820436501LL;
int zero = 0;
long long int var_12 = -8318822516120591142LL;
short var_13 = (short)-7440;
signed char var_14 = (signed char)-66;
long long int var_15 = 5407064271437079640LL;
signed char var_16 = (signed char)-85;
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
