#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21652;
unsigned char var_1 = (unsigned char)155;
signed char var_3 = (signed char)85;
signed char var_4 = (signed char)119;
unsigned char var_6 = (unsigned char)168;
long long int var_7 = 4815327651124186931LL;
short var_8 = (short)-10513;
signed char var_10 = (signed char)-62;
unsigned char var_11 = (unsigned char)167;
unsigned char var_16 = (unsigned char)152;
int zero = 0;
unsigned char var_20 = (unsigned char)177;
int var_21 = -176067370;
short var_22 = (short)1847;
short var_23 = (short)25202;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
