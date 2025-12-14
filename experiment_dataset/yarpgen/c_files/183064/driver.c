#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7517110520032417375LL;
unsigned int var_2 = 2439611039U;
long long int var_3 = -6887186963700228709LL;
signed char var_4 = (signed char)-16;
long long int var_5 = -3814507362663854662LL;
short var_6 = (short)-10420;
signed char var_7 = (signed char)47;
unsigned char var_8 = (unsigned char)131;
unsigned char var_9 = (unsigned char)12;
_Bool var_10 = (_Bool)1;
long long int var_11 = -5441057704238140672LL;
unsigned char var_12 = (unsigned char)108;
unsigned int var_13 = 777449284U;
unsigned char var_14 = (unsigned char)51;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1990267158464820807LL;
int zero = 0;
long long int var_18 = -1015728198851415111LL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-111;
signed char var_21 = (signed char)78;
signed char var_22 = (signed char)48;
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
