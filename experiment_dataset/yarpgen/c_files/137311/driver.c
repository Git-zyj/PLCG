#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9069132007768380827ULL;
unsigned short var_6 = (unsigned short)7441;
unsigned long long int var_8 = 8085915686973811318ULL;
unsigned int var_10 = 1090953382U;
unsigned short var_11 = (unsigned short)42234;
signed char var_13 = (signed char)-62;
unsigned long long int var_15 = 8780434065528823889ULL;
unsigned long long int var_17 = 9804239579979871380ULL;
int zero = 0;
long long int var_19 = 6344583093068917270LL;
unsigned int var_20 = 1229516740U;
short var_21 = (short)-4249;
unsigned int var_22 = 3892518867U;
signed char var_23 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
