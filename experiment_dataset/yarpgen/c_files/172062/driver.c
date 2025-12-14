#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 399682774;
signed char var_3 = (signed char)119;
int var_4 = 1183849037;
unsigned int var_6 = 2200216817U;
unsigned char var_7 = (unsigned char)131;
long long int var_9 = -607896680113014786LL;
signed char var_10 = (signed char)-15;
unsigned char var_11 = (unsigned char)5;
long long int var_12 = 1243279764074111146LL;
unsigned int var_13 = 3095530673U;
signed char var_15 = (signed char)-76;
long long int var_16 = 5063464171497694224LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)107;
signed char var_19 = (signed char)17;
signed char var_20 = (signed char)-8;
long long int var_21 = -8236041037874772412LL;
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
