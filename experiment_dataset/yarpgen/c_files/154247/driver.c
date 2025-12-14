#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26385;
unsigned char var_4 = (unsigned char)137;
unsigned char var_6 = (unsigned char)105;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_17 = -836629322657626979LL;
short var_18 = (short)-3361;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 4479749911401703466ULL;
unsigned char var_21 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
