#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-43;
unsigned long long int var_3 = 4257481117609798337ULL;
signed char var_5 = (signed char)11;
signed char var_6 = (signed char)54;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-93;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)41;
signed char var_11 = (signed char)69;
signed char var_12 = (signed char)104;
unsigned long long int var_14 = 801282580936526325ULL;
signed char var_16 = (signed char)50;
unsigned long long int var_17 = 1991770986455937932ULL;
int zero = 0;
signed char var_18 = (signed char)19;
signed char var_19 = (signed char)-99;
signed char var_20 = (signed char)124;
signed char var_21 = (signed char)0;
unsigned long long int var_22 = 5744532821417318687ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
