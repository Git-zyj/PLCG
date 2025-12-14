#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-27294;
unsigned int var_5 = 845758766U;
unsigned long long int var_9 = 8351680185850314083ULL;
long long int var_13 = 6725268267755793673LL;
unsigned short var_14 = (unsigned short)4870;
unsigned short var_15 = (unsigned short)44987;
int var_16 = 662763820;
unsigned short var_17 = (unsigned short)41971;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-20660;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
