#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
signed char var_1 = (signed char)20;
unsigned char var_2 = (unsigned char)151;
unsigned long long int var_4 = 14001395118256333916ULL;
short var_5 = (short)-30317;
short var_6 = (short)-5172;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 10639211161733231902ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)59118;
signed char var_11 = (signed char)-60;
unsigned short var_12 = (unsigned short)15806;
unsigned char var_13 = (unsigned char)100;
unsigned int var_14 = 1449452748U;
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
