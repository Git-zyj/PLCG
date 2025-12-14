#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3773216496U;
unsigned long long int var_2 = 14228003963521568682ULL;
signed char var_4 = (signed char)89;
unsigned long long int var_8 = 2147283013117015187ULL;
short var_9 = (short)-29449;
int zero = 0;
int var_10 = -1514428965;
unsigned char var_11 = (unsigned char)142;
unsigned char var_12 = (unsigned char)115;
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
