#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7515795036946820659LL;
unsigned char var_2 = (unsigned char)191;
int var_4 = 1622537000;
short var_6 = (short)17654;
long long int var_8 = -4013226409226433900LL;
int var_9 = -551864709;
signed char var_13 = (signed char)-6;
signed char var_16 = (signed char)63;
int zero = 0;
long long int var_17 = -8236070987144942186LL;
long long int var_18 = 666361375023361740LL;
int var_19 = 2106578690;
signed char var_20 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
