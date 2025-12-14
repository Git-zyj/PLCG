#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1933178921928965122LL;
long long int var_1 = -7392111574206271064LL;
unsigned char var_3 = (unsigned char)22;
unsigned short var_4 = (unsigned short)52725;
unsigned int var_5 = 3731601863U;
int var_6 = 1699110985;
unsigned short var_7 = (unsigned short)32652;
unsigned short var_8 = (unsigned short)10949;
signed char var_9 = (signed char)67;
int zero = 0;
int var_13 = 882502739;
unsigned int var_14 = 977038108U;
signed char var_15 = (signed char)59;
unsigned long long int var_16 = 13900579127526925525ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
