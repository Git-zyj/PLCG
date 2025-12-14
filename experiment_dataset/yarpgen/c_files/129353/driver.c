#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57159;
long long int var_5 = -181453751540856826LL;
short var_6 = (short)4024;
int var_7 = -1801792648;
unsigned int var_9 = 955728762U;
signed char var_10 = (signed char)26;
unsigned short var_11 = (unsigned short)36630;
int zero = 0;
unsigned int var_12 = 887686571U;
unsigned short var_13 = (unsigned short)11994;
unsigned int var_14 = 1184264704U;
unsigned char var_15 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
