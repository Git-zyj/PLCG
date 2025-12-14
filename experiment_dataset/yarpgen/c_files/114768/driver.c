#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11775;
short var_3 = (short)-27135;
_Bool var_4 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 18322549671867723425ULL;
unsigned long long int var_10 = 12624930016130144185ULL;
long long int var_11 = -3904453870743234677LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)29374;
_Bool var_16 = (_Bool)1;
int var_17 = -1028582274;
unsigned long long int var_18 = 14890964371886785163ULL;
short var_19 = (short)3531;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
