#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 3077480578U;
short var_3 = (short)-31753;
unsigned char var_8 = (unsigned char)161;
unsigned short var_9 = (unsigned short)31783;
unsigned short var_10 = (unsigned short)49073;
unsigned char var_13 = (unsigned char)167;
unsigned char var_15 = (unsigned char)225;
unsigned char var_19 = (unsigned char)86;
int zero = 0;
unsigned long long int var_20 = 14185724685326458694ULL;
unsigned char var_21 = (unsigned char)104;
signed char var_22 = (signed char)-125;
unsigned long long int var_23 = 16479491143476765155ULL;
long long int var_24 = -6335237787644683600LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
