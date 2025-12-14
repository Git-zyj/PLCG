#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2588455777481227538LL;
long long int var_10 = 6994473103700425344LL;
signed char var_12 = (signed char)-66;
unsigned short var_13 = (unsigned short)19617;
int var_16 = 155958764;
int zero = 0;
unsigned char var_17 = (unsigned char)211;
unsigned short var_18 = (unsigned short)17524;
int var_19 = 1982516939;
unsigned char var_20 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
