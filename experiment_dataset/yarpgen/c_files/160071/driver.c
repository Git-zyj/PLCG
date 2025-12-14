#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1635914188579810399ULL;
unsigned int var_4 = 1232973516U;
unsigned int var_5 = 2251607222U;
unsigned char var_7 = (unsigned char)67;
_Bool var_8 = (_Bool)0;
int var_9 = -1335029865;
signed char var_11 = (signed char)-15;
unsigned int var_14 = 3023171719U;
signed char var_16 = (signed char)-21;
int zero = 0;
unsigned long long int var_17 = 14070682841821579653ULL;
unsigned char var_18 = (unsigned char)101;
unsigned int var_19 = 19766045U;
unsigned int var_20 = 3512399997U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
