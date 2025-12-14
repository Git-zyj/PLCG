#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7661843446365333231LL;
unsigned int var_2 = 3659724257U;
int var_4 = 2039155036;
int var_6 = 1667762172;
short var_9 = (short)4613;
unsigned short var_10 = (unsigned short)3733;
unsigned long long int var_13 = 13075579283899063320ULL;
int var_15 = 1799686267;
signed char var_17 = (signed char)91;
int zero = 0;
unsigned short var_18 = (unsigned short)10713;
unsigned long long int var_19 = 13562770080478476416ULL;
long long int var_20 = -1208286425823067821LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
