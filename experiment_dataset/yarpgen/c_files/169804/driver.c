#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18201;
short var_3 = (short)18660;
unsigned int var_9 = 1291970192U;
unsigned int var_11 = 1967652871U;
int var_12 = -659075414;
int var_13 = -208527321;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 18590821U;
long long int var_16 = 3844322230071241363LL;
unsigned int var_17 = 973414014U;
unsigned int var_18 = 296311263U;
short var_19 = (short)31013;
int var_20 = -1450897484;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
