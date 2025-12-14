#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
short var_2 = (short)25207;
unsigned long long int var_4 = 10217137606788938223ULL;
int var_7 = 629239047;
int zero = 0;
short var_11 = (short)6088;
unsigned long long int var_12 = 11057431191741335556ULL;
void init() {
}

void checksum() {
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
