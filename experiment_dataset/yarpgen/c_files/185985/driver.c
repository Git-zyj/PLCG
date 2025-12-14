#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17411827034181889691ULL;
unsigned short var_3 = (unsigned short)47093;
short var_4 = (short)11087;
unsigned short var_7 = (unsigned short)21732;
unsigned char var_8 = (unsigned char)161;
long long int var_9 = 8341255744396031652LL;
long long int var_10 = -4923618493825578462LL;
int zero = 0;
short var_11 = (short)9407;
signed char var_12 = (signed char)64;
signed char var_13 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
