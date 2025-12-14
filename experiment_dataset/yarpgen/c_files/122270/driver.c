#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1500238031;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3863348308U;
unsigned int var_8 = 1037236282U;
_Bool var_9 = (_Bool)0;
unsigned char var_14 = (unsigned char)14;
signed char var_17 = (signed char)-117;
int zero = 0;
signed char var_18 = (signed char)-120;
unsigned long long int var_19 = 4761725790745495802ULL;
unsigned short var_20 = (unsigned short)2912;
void init() {
}

void checksum() {
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
