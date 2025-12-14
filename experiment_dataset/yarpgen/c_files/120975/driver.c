#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4860106662936317267LL;
int var_4 = 773436239;
int var_7 = -1579193780;
unsigned long long int var_8 = 6321196180120610262ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_17 = (unsigned char)216;
int zero = 0;
unsigned short var_19 = (unsigned short)58760;
short var_20 = (short)-10374;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
