#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
unsigned long long int var_2 = 10049772445493083500ULL;
unsigned short var_5 = (unsigned short)47095;
signed char var_6 = (signed char)29;
unsigned short var_7 = (unsigned short)10293;
signed char var_8 = (signed char)-62;
int var_10 = 992840056;
int var_11 = -1772109034;
unsigned long long int var_12 = 17085454976935714583ULL;
_Bool var_13 = (_Bool)1;
short var_16 = (short)-5194;
int zero = 0;
int var_17 = 1906322191;
signed char var_18 = (signed char)69;
signed char var_19 = (signed char)-91;
short var_20 = (short)-8083;
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
