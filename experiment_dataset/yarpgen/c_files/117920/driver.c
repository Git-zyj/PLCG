#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-10895;
unsigned short var_4 = (unsigned short)5361;
unsigned int var_6 = 3641214488U;
long long int var_7 = -3443261893718103293LL;
short var_8 = (short)-3132;
unsigned short var_9 = (unsigned short)47615;
unsigned short var_10 = (unsigned short)56843;
long long int var_11 = -6878401829171730691LL;
int zero = 0;
long long int var_12 = 1790882553542428651LL;
int var_13 = 200670181;
void init() {
}

void checksum() {
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
