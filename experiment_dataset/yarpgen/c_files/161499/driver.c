#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14942;
unsigned long long int var_3 = 12856079364610591106ULL;
long long int var_4 = -258240643260094707LL;
unsigned long long int var_13 = 1120748214425693259ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_17 = (short)11715;
short var_18 = (short)255;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
