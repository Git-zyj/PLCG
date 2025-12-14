#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)24417;
int var_4 = -1652148357;
long long int var_5 = 3689970946935252470LL;
unsigned long long int var_7 = 2023193433638825327ULL;
long long int var_12 = -2487390685089523033LL;
int zero = 0;
unsigned long long int var_13 = 4788739954037563679ULL;
int var_14 = -1203760676;
short var_15 = (short)-27480;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
