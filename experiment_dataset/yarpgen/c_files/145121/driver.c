#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7682;
long long int var_2 = 7258627268252194370LL;
short var_3 = (short)29356;
unsigned int var_4 = 3149506270U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 2112033659408022712ULL;
_Bool var_8 = (_Bool)0;
int var_9 = 1367472608;
int zero = 0;
long long int var_10 = 4740916534113464585LL;
long long int var_11 = -3285768539699073862LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
