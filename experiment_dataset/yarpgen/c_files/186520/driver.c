#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)72;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 671624028556760982ULL;
_Bool var_4 = (_Bool)1;
int var_6 = 2028251062;
unsigned long long int var_7 = 4938443624602753112ULL;
signed char var_8 = (signed char)-24;
int zero = 0;
unsigned char var_12 = (unsigned char)250;
long long int var_13 = 641966191687411784LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
