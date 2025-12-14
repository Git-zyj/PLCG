#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34304;
signed char var_8 = (signed char)-73;
signed char var_9 = (signed char)65;
int zero = 0;
unsigned long long int var_10 = 10827267103249810770ULL;
long long int var_11 = 9131767017519394665LL;
long long int var_12 = 1336442079981836008LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
