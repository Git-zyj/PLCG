#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12190;
int var_3 = -1869106036;
int var_5 = 1893513489;
int var_8 = 1888089840;
int var_9 = -1714549585;
int var_10 = -573072425;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_18 = 1131055814;
unsigned long long int var_19 = 3211493221834437764ULL;
int var_20 = -1531478198;
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
