#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 15427198615992503469ULL;
unsigned int var_3 = 583139452U;
unsigned char var_4 = (unsigned char)53;
unsigned long long int var_5 = 12507983088368947174ULL;
unsigned char var_6 = (unsigned char)194;
unsigned char var_7 = (unsigned char)60;
signed char var_8 = (signed char)-90;
signed char var_9 = (signed char)19;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)118;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)27737;
short var_18 = (short)-13521;
short var_19 = (short)-25983;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
