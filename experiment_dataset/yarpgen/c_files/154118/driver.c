#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
long long int var_2 = 6659117251105553021LL;
short var_3 = (short)-6788;
int var_4 = 1785310117;
short var_6 = (short)29775;
short var_7 = (short)-27156;
long long int var_8 = -1102235515905447727LL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)62502;
signed char var_12 = (signed char)64;
int zero = 0;
signed char var_14 = (signed char)16;
short var_15 = (short)-17669;
unsigned short var_16 = (unsigned short)45162;
unsigned char var_17 = (unsigned char)157;
signed char var_18 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
