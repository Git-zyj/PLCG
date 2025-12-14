#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1326310352915500686LL;
unsigned char var_5 = (unsigned char)52;
short var_9 = (short)27799;
signed char var_10 = (signed char)-118;
int zero = 0;
unsigned char var_19 = (unsigned char)39;
unsigned long long int var_20 = 6291376772602695481ULL;
void init() {
}

void checksum() {
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
