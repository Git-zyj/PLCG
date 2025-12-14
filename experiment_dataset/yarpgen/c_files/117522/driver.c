#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9621599167276742741ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 7849676031694425508ULL;
unsigned short var_9 = (unsigned short)16216;
short var_11 = (short)-27878;
int var_16 = 2043434841;
int zero = 0;
int var_17 = 437968495;
unsigned short var_18 = (unsigned short)8795;
void init() {
}

void checksum() {
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
