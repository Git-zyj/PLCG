#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)12841;
unsigned char var_9 = (unsigned char)29;
unsigned long long int var_10 = 1336475088307277655ULL;
short var_11 = (short)-19895;
unsigned char var_12 = (unsigned char)178;
unsigned short var_13 = (unsigned short)19514;
long long int var_14 = -1152978915218545056LL;
int var_15 = 2071639912;
unsigned long long int var_16 = 7248550932430609875ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_20 = 1267635714;
long long int var_21 = -1499470578718387802LL;
unsigned long long int var_22 = 10726171904326267056ULL;
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
