#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1836767672;
long long int var_5 = 342435577747834647LL;
signed char var_6 = (signed char)-77;
unsigned char var_8 = (unsigned char)165;
unsigned char var_9 = (unsigned char)12;
signed char var_10 = (signed char)14;
int var_12 = -963743273;
signed char var_13 = (signed char)-127;
unsigned char var_16 = (unsigned char)251;
unsigned long long int var_17 = 7928243666690427968ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)41056;
unsigned short var_19 = (unsigned short)47496;
short var_20 = (short)-16344;
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
