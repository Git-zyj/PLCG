#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-54;
unsigned char var_1 = (unsigned char)171;
unsigned short var_3 = (unsigned short)25932;
_Bool var_4 = (_Bool)1;
int var_6 = -366598305;
int var_7 = -1362770742;
int var_9 = 207219549;
unsigned char var_10 = (unsigned char)174;
short var_11 = (short)-29017;
unsigned int var_12 = 1445801036U;
short var_13 = (short)-27067;
signed char var_14 = (signed char)113;
unsigned short var_16 = (unsigned short)10664;
int zero = 0;
int var_18 = -1833586961;
signed char var_19 = (signed char)123;
short var_20 = (short)25651;
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
