#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10716567383912242504ULL;
unsigned char var_1 = (unsigned char)151;
_Bool var_2 = (_Bool)0;
int var_3 = 94374788;
long long int var_4 = 4871245895402758181LL;
int var_6 = 121068052;
short var_7 = (short)-11847;
unsigned char var_10 = (unsigned char)50;
unsigned long long int var_11 = 17617258715747614923ULL;
int var_12 = -2129912193;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -2123834338;
unsigned long long int var_17 = 6134663787748631930ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
