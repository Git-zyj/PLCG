#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1975;
unsigned char var_2 = (unsigned char)122;
unsigned int var_3 = 3708739539U;
signed char var_7 = (signed char)-44;
unsigned char var_10 = (unsigned char)167;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 10325614750075328741ULL;
unsigned char var_13 = (unsigned char)27;
long long int var_14 = 4211839068099982707LL;
short var_15 = (short)14227;
int zero = 0;
unsigned short var_16 = (unsigned short)24119;
unsigned short var_17 = (unsigned short)16089;
unsigned short var_18 = (unsigned short)61594;
unsigned long long int var_19 = 5394883954863761142ULL;
long long int var_20 = 7175522699791257792LL;
unsigned short var_21 = (unsigned short)52283;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
