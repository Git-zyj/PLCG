#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
long long int var_1 = 481000099947091699LL;
unsigned short var_2 = (unsigned short)187;
unsigned short var_4 = (unsigned short)7311;
long long int var_5 = 1559532503435425145LL;
signed char var_6 = (signed char)70;
short var_8 = (short)14174;
short var_10 = (short)19640;
short var_16 = (short)20249;
unsigned short var_17 = (unsigned short)50368;
int zero = 0;
unsigned short var_18 = (unsigned short)15621;
short var_19 = (short)5422;
int var_20 = -501751980;
unsigned char var_21 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
