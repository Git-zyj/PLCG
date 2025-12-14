#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1324444509;
unsigned long long int var_3 = 11740716805864963035ULL;
short var_4 = (short)23315;
unsigned long long int var_8 = 3391584905544913867ULL;
signed char var_9 = (signed char)5;
unsigned short var_10 = (unsigned short)864;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -1838121181;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)14382;
unsigned long long int var_15 = 6230836872387554181ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
