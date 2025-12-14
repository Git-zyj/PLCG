#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-65;
signed char var_4 = (signed char)-55;
unsigned char var_6 = (unsigned char)237;
short var_8 = (short)-30513;
short var_9 = (short)13810;
unsigned char var_10 = (unsigned char)118;
unsigned short var_11 = (unsigned short)23361;
int var_12 = -1213471355;
unsigned short var_13 = (unsigned short)35735;
int zero = 0;
int var_15 = -1154888269;
long long int var_16 = 4597547473113041566LL;
void init() {
}

void checksum() {
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
