#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 955377124U;
unsigned short var_3 = (unsigned short)18956;
unsigned char var_4 = (unsigned char)183;
unsigned char var_5 = (unsigned char)20;
unsigned long long int var_7 = 16754248727828045520ULL;
unsigned int var_9 = 1233730140U;
int var_10 = -1914145858;
long long int var_11 = 9028201189067611137LL;
unsigned char var_13 = (unsigned char)225;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 2587350434486261109ULL;
unsigned char var_17 = (unsigned char)149;
unsigned char var_18 = (unsigned char)177;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)4;
unsigned long long int var_22 = 9093806257257051896ULL;
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
