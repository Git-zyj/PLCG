#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62923;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)169;
long long int var_8 = 1067001132270062623LL;
signed char var_9 = (signed char)-49;
unsigned long long int var_15 = 8366651626057916542ULL;
int zero = 0;
unsigned long long int var_17 = 11500600941371924138ULL;
short var_18 = (short)-10819;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
