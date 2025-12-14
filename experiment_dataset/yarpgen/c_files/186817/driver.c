#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 705824479;
int var_4 = 549327427;
unsigned char var_5 = (unsigned char)44;
int var_7 = -613807364;
unsigned long long int var_8 = 13111890434236359979ULL;
int var_9 = -1549814208;
signed char var_11 = (signed char)26;
short var_14 = (short)-28291;
int var_17 = 595387640;
int zero = 0;
signed char var_18 = (signed char)-97;
long long int var_19 = 8013267437521552215LL;
_Bool var_20 = (_Bool)1;
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
