#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3294185229U;
signed char var_2 = (signed char)2;
unsigned short var_6 = (unsigned short)36857;
short var_8 = (short)31251;
short var_9 = (short)17235;
long long int var_10 = -3375175613225309475LL;
short var_14 = (short)27062;
unsigned char var_15 = (unsigned char)129;
int zero = 0;
unsigned long long int var_18 = 10928636017385825665ULL;
long long int var_19 = -1872253140963656505LL;
unsigned char var_20 = (unsigned char)144;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-13904;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
