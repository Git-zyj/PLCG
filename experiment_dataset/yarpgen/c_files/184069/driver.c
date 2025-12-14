#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9585;
_Bool var_1 = (_Bool)0;
long long int var_2 = -8442825175390274953LL;
unsigned long long int var_3 = 6767324055387958896ULL;
unsigned long long int var_5 = 9328794835379800160ULL;
unsigned int var_6 = 1423892267U;
unsigned long long int var_7 = 13844457010150914543ULL;
long long int var_8 = 6081595902292003645LL;
unsigned char var_9 = (unsigned char)20;
unsigned long long int var_10 = 13323210768815688193ULL;
long long int var_12 = -5242644372442856735LL;
int zero = 0;
long long int var_13 = 2779183756256614366LL;
unsigned char var_14 = (unsigned char)164;
unsigned short var_15 = (unsigned short)15613;
unsigned long long int var_16 = 9073517940671456943ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
