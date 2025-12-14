#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1368492527;
signed char var_2 = (signed char)-120;
unsigned char var_8 = (unsigned char)104;
signed char var_9 = (signed char)49;
unsigned char var_11 = (unsigned char)66;
signed char var_12 = (signed char)101;
short var_13 = (short)-22086;
int zero = 0;
short var_19 = (short)11862;
signed char var_20 = (signed char)25;
signed char var_21 = (signed char)-102;
long long int var_22 = -1146375459267518585LL;
void init() {
}

void checksum() {
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
