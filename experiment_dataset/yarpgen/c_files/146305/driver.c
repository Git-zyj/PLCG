#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
long long int var_2 = -6804513716200197526LL;
signed char var_3 = (signed char)-9;
signed char var_7 = (signed char)64;
unsigned char var_9 = (unsigned char)111;
long long int var_10 = 8295655660680032061LL;
int var_15 = -11874727;
unsigned long long int var_16 = 16743283110723422276ULL;
int zero = 0;
int var_17 = -345846298;
unsigned char var_18 = (unsigned char)86;
unsigned char var_19 = (unsigned char)59;
unsigned short var_20 = (unsigned short)48511;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
