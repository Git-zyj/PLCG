#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-16;
short var_3 = (short)32082;
unsigned long long int var_5 = 10861832300002431078ULL;
unsigned long long int var_7 = 16198728727815472972ULL;
int var_9 = -861254311;
int zero = 0;
unsigned long long int var_10 = 18020278208203395177ULL;
signed char var_11 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
