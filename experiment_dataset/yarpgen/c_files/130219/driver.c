#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34114;
int var_2 = 1753335600;
unsigned char var_3 = (unsigned char)34;
unsigned long long int var_5 = 13370207640731774491ULL;
unsigned char var_9 = (unsigned char)69;
unsigned long long int var_10 = 3214526612638351128ULL;
signed char var_12 = (signed char)-55;
long long int var_13 = 8685069851939297602LL;
signed char var_15 = (signed char)62;
int zero = 0;
unsigned char var_16 = (unsigned char)226;
unsigned char var_17 = (unsigned char)76;
unsigned char var_18 = (unsigned char)3;
unsigned short var_19 = (unsigned short)22659;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
