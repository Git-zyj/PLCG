#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1094664789;
int var_3 = 1165065838;
int var_4 = -2043186215;
signed char var_5 = (signed char)37;
signed char var_6 = (signed char)-79;
signed char var_10 = (signed char)-94;
int var_11 = -2087401228;
int zero = 0;
signed char var_12 = (signed char)-24;
unsigned short var_13 = (unsigned short)13521;
void init() {
}

void checksum() {
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
