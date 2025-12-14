#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47995;
long long int var_3 = 475007221460823706LL;
unsigned short var_4 = (unsigned short)34785;
unsigned short var_5 = (unsigned short)17411;
long long int var_7 = 8042885740731001673LL;
long long int var_11 = -66442200343013896LL;
short var_13 = (short)5347;
unsigned long long int var_15 = 14241007052659268775ULL;
signed char var_17 = (signed char)11;
int zero = 0;
unsigned int var_20 = 672787522U;
unsigned short var_21 = (unsigned short)45473;
unsigned long long int var_22 = 15400190742130071643ULL;
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
