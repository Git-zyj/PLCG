#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18361017490709328009ULL;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-12650;
unsigned int var_6 = 1199980633U;
unsigned long long int var_8 = 14293914118623011497ULL;
int zero = 0;
unsigned long long int var_11 = 8643727085184710346ULL;
short var_12 = (short)-25558;
unsigned long long int var_13 = 4702454857127844762ULL;
unsigned long long int var_14 = 8512468641689738956ULL;
unsigned long long int var_15 = 13429872186496025957ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
