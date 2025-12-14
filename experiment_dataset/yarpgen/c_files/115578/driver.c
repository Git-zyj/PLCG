#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12048;
long long int var_1 = -1020337078336567537LL;
unsigned char var_4 = (unsigned char)38;
long long int var_5 = 2198285602331809164LL;
unsigned long long int var_7 = 9003888635004412528ULL;
unsigned long long int var_9 = 4314874332263036399ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)38706;
long long int var_11 = -2999553040897418545LL;
short var_12 = (short)-28047;
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
