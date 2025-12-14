#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26145;
unsigned short var_2 = (unsigned short)62477;
unsigned long long int var_4 = 7437583589090977262ULL;
unsigned char var_6 = (unsigned char)177;
_Bool var_7 = (_Bool)0;
int var_9 = 786646797;
short var_10 = (short)-9226;
unsigned short var_11 = (unsigned short)44435;
unsigned long long int var_13 = 4650567494659876484ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)59618;
unsigned char var_16 = (unsigned char)166;
short var_17 = (short)9142;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
