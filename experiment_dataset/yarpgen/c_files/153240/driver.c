#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
unsigned long long int var_2 = 12450303425162693109ULL;
signed char var_3 = (signed char)104;
short var_5 = (short)-15489;
signed char var_6 = (signed char)8;
int var_8 = -565063594;
unsigned char var_9 = (unsigned char)238;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -1021688051;
short var_12 = (short)-32528;
int var_13 = -1632524300;
unsigned char var_14 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
