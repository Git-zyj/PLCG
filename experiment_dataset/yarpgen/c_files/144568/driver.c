#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)118;
unsigned char var_3 = (unsigned char)152;
unsigned short var_4 = (unsigned short)53984;
unsigned long long int var_5 = 3396232520971021869ULL;
unsigned int var_7 = 2214824521U;
unsigned long long int var_10 = 18166608671712783442ULL;
signed char var_11 = (signed char)-105;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 18252561663276286079ULL;
_Bool var_19 = (_Bool)0;
int var_20 = 2073259226;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
