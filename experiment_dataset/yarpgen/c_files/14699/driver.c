#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
signed char var_1 = (signed char)21;
unsigned short var_2 = (unsigned short)25091;
int var_3 = 210183530;
short var_7 = (short)-6228;
unsigned long long int var_8 = 6394960789902366245ULL;
unsigned short var_15 = (unsigned short)14691;
int zero = 0;
signed char var_16 = (signed char)105;
long long int var_17 = -1744879604918218568LL;
long long int var_18 = -5278776434827203192LL;
long long int var_19 = 9141385289660700391LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
