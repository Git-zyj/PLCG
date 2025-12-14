#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)36072;
unsigned char var_6 = (unsigned char)71;
unsigned short var_9 = (unsigned short)34879;
unsigned short var_10 = (unsigned short)13979;
unsigned short var_11 = (unsigned short)31005;
unsigned short var_17 = (unsigned short)32178;
int zero = 0;
signed char var_18 = (signed char)88;
unsigned long long int var_19 = 5966972533451679670ULL;
short var_20 = (short)6867;
void init() {
}

void checksum() {
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
