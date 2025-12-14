#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
unsigned int var_1 = 3755619696U;
signed char var_3 = (signed char)90;
int var_7 = -1399605547;
short var_8 = (short)-13967;
short var_12 = (short)18637;
unsigned long long int var_17 = 1430095564101675938ULL;
long long int var_18 = 7996758321394661571LL;
int zero = 0;
unsigned char var_20 = (unsigned char)167;
unsigned char var_21 = (unsigned char)3;
long long int var_22 = 4749727450535456748LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
