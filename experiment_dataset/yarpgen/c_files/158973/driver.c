#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
unsigned char var_3 = (unsigned char)115;
unsigned char var_4 = (unsigned char)50;
unsigned int var_11 = 4012791681U;
long long int var_13 = 9028874797805265632LL;
unsigned long long int var_14 = 16294508575122442422ULL;
int zero = 0;
int var_16 = 1159759587;
long long int var_17 = -3418834429914299759LL;
signed char var_18 = (signed char)36;
long long int var_19 = 7084734226772994807LL;
unsigned char var_20 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
