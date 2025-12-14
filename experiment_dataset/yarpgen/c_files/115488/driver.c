#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7299943279132487173ULL;
unsigned char var_1 = (unsigned char)214;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1354839603U;
short var_8 = (short)-11443;
int zero = 0;
int var_10 = 395653297;
unsigned short var_11 = (unsigned short)62704;
unsigned int var_12 = 2949378477U;
signed char var_13 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
