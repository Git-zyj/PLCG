#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7666274094855610855ULL;
unsigned long long int var_1 = 2021079286849816151ULL;
unsigned long long int var_2 = 11379636692216344869ULL;
unsigned long long int var_4 = 17318074745337792774ULL;
unsigned long long int var_6 = 15190472800785689605ULL;
short var_7 = (short)-3671;
unsigned char var_14 = (unsigned char)105;
int zero = 0;
signed char var_17 = (signed char)-116;
unsigned int var_18 = 885881680U;
short var_19 = (short)17460;
int var_20 = 934551564;
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
