#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32047;
unsigned char var_5 = (unsigned char)110;
signed char var_7 = (signed char)-111;
long long int var_9 = 3438390292186597600LL;
signed char var_10 = (signed char)-8;
int zero = 0;
signed char var_18 = (signed char)15;
signed char var_19 = (signed char)5;
unsigned short var_20 = (unsigned short)15078;
void init() {
}

void checksum() {
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
