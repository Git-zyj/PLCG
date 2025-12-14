#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2839774352553813281LL;
short var_1 = (short)-3343;
unsigned int var_2 = 4043271604U;
unsigned int var_3 = 52423652U;
unsigned short var_6 = (unsigned short)43761;
unsigned short var_9 = (unsigned short)63240;
unsigned short var_12 = (unsigned short)59237;
int zero = 0;
long long int var_15 = -388300065754997194LL;
int var_16 = 1112530236;
signed char var_17 = (signed char)-45;
unsigned long long int var_18 = 18223331705745597004ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
