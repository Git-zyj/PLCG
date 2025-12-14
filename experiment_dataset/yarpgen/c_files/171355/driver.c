#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -527547926555568306LL;
unsigned int var_4 = 3308758007U;
unsigned long long int var_6 = 555261056033234522ULL;
unsigned char var_7 = (unsigned char)186;
short var_14 = (short)-25087;
int zero = 0;
unsigned short var_17 = (unsigned short)32797;
short var_18 = (short)-10896;
unsigned short var_19 = (unsigned short)50253;
unsigned char var_20 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
