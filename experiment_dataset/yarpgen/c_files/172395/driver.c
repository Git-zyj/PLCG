#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10961744329360224562ULL;
unsigned char var_4 = (unsigned char)36;
unsigned long long int var_6 = 8800016663021437805ULL;
unsigned long long int var_7 = 13477826503129616351ULL;
unsigned short var_10 = (unsigned short)8383;
unsigned char var_12 = (unsigned char)185;
unsigned long long int var_13 = 5808645717278379028ULL;
long long int var_14 = -4431862420206969489LL;
short var_16 = (short)1619;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 162613609274054747ULL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)2117;
int var_21 = -383832134;
signed char var_22 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
