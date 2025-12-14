#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-21487;
long long int var_6 = 349621693581186129LL;
short var_7 = (short)-20585;
int zero = 0;
short var_19 = (short)21383;
long long int var_20 = -2409233577648663667LL;
short var_21 = (short)21533;
unsigned char var_22 = (unsigned char)37;
unsigned char var_23 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
