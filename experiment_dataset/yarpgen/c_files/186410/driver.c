#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4266732318942333588LL;
unsigned char var_1 = (unsigned char)87;
short var_4 = (short)-8801;
signed char var_5 = (signed char)32;
signed char var_6 = (signed char)7;
unsigned short var_9 = (unsigned short)34149;
int zero = 0;
unsigned long long int var_11 = 15816388616735082772ULL;
unsigned short var_12 = (unsigned short)59897;
unsigned int var_13 = 1893367803U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
