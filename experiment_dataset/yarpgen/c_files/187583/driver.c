#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27666;
unsigned long long int var_2 = 11354393485051344122ULL;
unsigned int var_3 = 496515427U;
unsigned short var_5 = (unsigned short)56632;
short var_7 = (short)20308;
unsigned char var_8 = (unsigned char)62;
unsigned long long int var_10 = 9737331726897435999ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)60886;
unsigned long long int var_12 = 4401943989845494557ULL;
unsigned long long int var_13 = 12254269970289667821ULL;
short var_14 = (short)-27402;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
