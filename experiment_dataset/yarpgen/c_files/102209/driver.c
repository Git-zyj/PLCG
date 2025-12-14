#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11991;
int var_1 = -503870103;
long long int var_4 = -7326294797349297931LL;
int var_5 = -1263089616;
unsigned short var_7 = (unsigned short)35079;
signed char var_9 = (signed char)8;
int zero = 0;
unsigned long long int var_11 = 9781206871295675506ULL;
signed char var_12 = (signed char)34;
unsigned long long int var_13 = 80721905509544972ULL;
unsigned long long int var_14 = 9892459913996734898ULL;
void init() {
}

void checksum() {
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
