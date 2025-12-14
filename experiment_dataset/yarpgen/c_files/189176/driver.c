#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 87108774;
unsigned int var_6 = 2550153481U;
unsigned long long int var_9 = 18276298113014804699ULL;
short var_10 = (short)-28359;
unsigned char var_11 = (unsigned char)6;
int var_14 = -1402746094;
unsigned short var_16 = (unsigned short)34224;
unsigned int var_17 = 3941059301U;
unsigned int var_18 = 889460345U;
int zero = 0;
long long int var_20 = 8191566925177115784LL;
signed char var_21 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
