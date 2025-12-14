#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-54;
unsigned char var_4 = (unsigned char)136;
long long int var_6 = 8403665851825076884LL;
int var_7 = 1837959430;
int var_8 = -153981021;
int zero = 0;
signed char var_10 = (signed char)-2;
int var_11 = 1111336123;
signed char var_12 = (signed char)64;
unsigned long long int var_13 = 15227625945035062683ULL;
short var_14 = (short)-10993;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
