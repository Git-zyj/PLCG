#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25166;
long long int var_1 = 2872165886876534969LL;
unsigned long long int var_2 = 16149367229757407774ULL;
short var_4 = (short)-9770;
unsigned long long int var_5 = 4227519376629999796ULL;
unsigned char var_6 = (unsigned char)237;
unsigned long long int var_7 = 13477135144361769089ULL;
unsigned long long int var_8 = 12187322792887868183ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)122;
int zero = 0;
unsigned short var_11 = (unsigned short)32805;
unsigned long long int var_12 = 6589575652374398333ULL;
unsigned short var_13 = (unsigned short)49973;
signed char var_14 = (signed char)-1;
int var_15 = -761962339;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
