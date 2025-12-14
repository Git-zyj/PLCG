#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1353629888U;
unsigned int var_1 = 3211090686U;
unsigned char var_2 = (unsigned char)153;
signed char var_4 = (signed char)-38;
unsigned char var_6 = (unsigned char)61;
signed char var_9 = (signed char)-71;
unsigned short var_10 = (unsigned short)34257;
unsigned char var_12 = (unsigned char)179;
long long int var_13 = 3061022660060012023LL;
unsigned int var_14 = 891691103U;
unsigned char var_16 = (unsigned char)143;
unsigned short var_17 = (unsigned short)47778;
unsigned short var_18 = (unsigned short)6688;
signed char var_19 = (signed char)-125;
int zero = 0;
unsigned char var_20 = (unsigned char)230;
long long int var_21 = -2286128002242621000LL;
unsigned char var_22 = (unsigned char)155;
void init() {
}

void checksum() {
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
