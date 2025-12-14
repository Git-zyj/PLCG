#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 41223483;
short var_4 = (short)-25738;
unsigned long long int var_7 = 11081490390352278923ULL;
signed char var_8 = (signed char)-61;
signed char var_9 = (signed char)-85;
signed char var_10 = (signed char)23;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -1222562577775398907LL;
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
