#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)132;
int var_2 = 704335677;
unsigned long long int var_3 = 2231119827272122480ULL;
unsigned long long int var_4 = 12855716856130682439ULL;
signed char var_6 = (signed char)71;
long long int var_7 = -5973737154004533295LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_13 = 8070367392049764134LL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
