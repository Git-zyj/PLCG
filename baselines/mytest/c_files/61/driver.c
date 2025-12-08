#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
short var_1 = (short)-2367;
unsigned int var_2 = 421448857U;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-23;
int var_10 = 819386841;
int zero = 0;
unsigned short var_18 = (unsigned short)14950;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3722943164U;
int var_21 = -818657002;
unsigned long long int var_22 = 11841602720362491613ULL;
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
