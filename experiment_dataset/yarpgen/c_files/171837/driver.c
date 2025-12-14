#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12518788779522818154ULL;
signed char var_2 = (signed char)105;
unsigned long long int var_6 = 13201722760091241321ULL;
int var_8 = -1895263154;
unsigned short var_9 = (unsigned short)49705;
int var_10 = 933648936;
unsigned char var_11 = (unsigned char)112;
signed char var_13 = (signed char)-28;
int zero = 0;
signed char var_15 = (signed char)-31;
unsigned long long int var_16 = 4885035881235814381ULL;
unsigned short var_17 = (unsigned short)12967;
unsigned char var_18 = (unsigned char)46;
long long int var_19 = -4926824638003307654LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
