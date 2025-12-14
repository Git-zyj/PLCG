#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10579173492778850253ULL;
long long int var_5 = -7575111733277279954LL;
short var_7 = (short)-27981;
unsigned char var_8 = (unsigned char)187;
int zero = 0;
short var_10 = (short)26680;
signed char var_11 = (signed char)7;
unsigned char var_12 = (unsigned char)117;
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
