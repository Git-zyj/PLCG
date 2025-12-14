#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6615413395317355299ULL;
long long int var_3 = 6395631625240275848LL;
int zero = 0;
unsigned char var_13 = (unsigned char)157;
long long int var_14 = -220656392583238573LL;
short var_15 = (short)-23448;
void init() {
}

void checksum() {
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
