#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
unsigned int var_1 = 1455137670U;
unsigned long long int var_2 = 2086106337306125482ULL;
unsigned char var_3 = (unsigned char)32;
signed char var_5 = (signed char)-85;
_Bool var_7 = (_Bool)0;
long long int var_8 = 8829533198746018606LL;
unsigned short var_10 = (unsigned short)19332;
unsigned long long int var_11 = 7586724977340322669ULL;
short var_12 = (short)-28172;
long long int var_13 = 6248536652260199661LL;
unsigned int var_16 = 619392996U;
int var_17 = 762000122;
int zero = 0;
unsigned char var_20 = (unsigned char)168;
unsigned char var_21 = (unsigned char)19;
signed char var_22 = (signed char)-26;
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
