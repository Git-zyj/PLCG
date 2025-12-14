#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3949134835722875362ULL;
unsigned long long int var_7 = 17798506696209336621ULL;
short var_8 = (short)-764;
int zero = 0;
unsigned int var_10 = 2334247425U;
_Bool var_11 = (_Bool)1;
long long int var_12 = 7436514075602097206LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
