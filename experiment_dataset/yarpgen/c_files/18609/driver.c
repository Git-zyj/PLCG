#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9393264491456328791ULL;
signed char var_1 = (signed char)-5;
unsigned char var_2 = (unsigned char)25;
unsigned long long int var_3 = 5143742225110164925ULL;
long long int var_4 = -6417035916750182424LL;
long long int var_5 = 2487761056004331878LL;
int var_6 = -1818444175;
unsigned long long int var_7 = 13269219249650473793ULL;
unsigned short var_8 = (unsigned short)43020;
unsigned short var_9 = (unsigned short)10718;
unsigned long long int var_10 = 9859415756178936155ULL;
unsigned char var_11 = (unsigned char)83;
short var_12 = (short)-14458;
int var_13 = -1482413729;
int zero = 0;
unsigned long long int var_14 = 14804128272327255160ULL;
signed char var_15 = (signed char)-93;
signed char var_16 = (signed char)-14;
unsigned short var_17 = (unsigned short)20522;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
