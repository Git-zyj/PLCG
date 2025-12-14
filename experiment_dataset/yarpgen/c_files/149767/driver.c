#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 224216117;
short var_2 = (short)-30143;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)50153;
signed char var_9 = (signed char)-46;
int zero = 0;
unsigned long long int var_11 = 8818328244287704805ULL;
short var_12 = (short)-8072;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
