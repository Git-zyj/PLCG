#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
unsigned long long int var_1 = 15119933740723935306ULL;
signed char var_3 = (signed char)111;
unsigned long long int var_4 = 8768447656126803528ULL;
unsigned char var_6 = (unsigned char)67;
short var_7 = (short)-28260;
unsigned char var_8 = (unsigned char)129;
long long int var_9 = -6626717532409777401LL;
signed char var_11 = (signed char)-115;
unsigned int var_12 = 1969899455U;
unsigned long long int var_13 = 7637946366105519716ULL;
long long int var_14 = 1560081487762245614LL;
long long int var_15 = -8654979496384480485LL;
unsigned long long int var_16 = 7773184937260827400ULL;
unsigned int var_17 = 4254657333U;
unsigned int var_18 = 3103927216U;
int zero = 0;
unsigned char var_19 = (unsigned char)202;
signed char var_20 = (signed char)-107;
unsigned char var_21 = (unsigned char)179;
unsigned long long int var_22 = 12175642698641345775ULL;
void init() {
}

void checksum() {
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
