#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8695363370198375716LL;
signed char var_2 = (signed char)121;
unsigned char var_4 = (unsigned char)128;
signed char var_8 = (signed char)117;
int var_9 = 542414949;
long long int var_10 = 7467767722173980150LL;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)197;
int zero = 0;
unsigned short var_14 = (unsigned short)31490;
long long int var_15 = 4625900911177421393LL;
long long int var_16 = 1494707278792419518LL;
short var_17 = (short)-15935;
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
