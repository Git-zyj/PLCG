#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)156;
unsigned short var_1 = (unsigned short)772;
unsigned short var_2 = (unsigned short)38148;
unsigned short var_3 = (unsigned short)18538;
unsigned char var_4 = (unsigned char)210;
int var_5 = 499991281;
int var_6 = -1522416153;
unsigned short var_9 = (unsigned short)26286;
unsigned long long int var_10 = 16352370391496730070ULL;
unsigned short var_11 = (unsigned short)5723;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-55;
unsigned int var_19 = 2108156808U;
int zero = 0;
unsigned int var_20 = 2665619322U;
unsigned int var_21 = 2235937945U;
int var_22 = 1793048303;
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
