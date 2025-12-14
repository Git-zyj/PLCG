#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2810448795897303610LL;
short var_3 = (short)10322;
int var_4 = 2013989882;
unsigned char var_6 = (unsigned char)225;
unsigned short var_7 = (unsigned short)6316;
long long int var_12 = -8976837293924460238LL;
unsigned int var_14 = 4036424019U;
int zero = 0;
short var_16 = (short)-20682;
signed char var_17 = (signed char)-77;
int var_18 = -1979267980;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
