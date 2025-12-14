#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7366542318478729573ULL;
unsigned int var_4 = 3447119111U;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_17 = (short)-27869;
unsigned long long int var_18 = 15835068733246428299ULL;
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
