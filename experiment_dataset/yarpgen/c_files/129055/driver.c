#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7049225529051285308LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 3190145377158064337ULL;
unsigned long long int var_4 = 3577577266123137620ULL;
unsigned long long int var_6 = 15427452702209857135ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)37405;
unsigned char var_14 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
