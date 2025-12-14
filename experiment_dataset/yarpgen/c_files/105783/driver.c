#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)91;
signed char var_8 = (signed char)-11;
long long int var_17 = 5986507034577184542LL;
int zero = 0;
signed char var_20 = (signed char)-2;
unsigned short var_21 = (unsigned short)839;
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
