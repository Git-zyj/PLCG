#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_16 = (unsigned short)43411;
signed char var_18 = (signed char)-50;
int zero = 0;
int var_20 = -1630358307;
unsigned short var_21 = (unsigned short)45476;
unsigned short var_22 = (unsigned short)8680;
int var_23 = 1975879257;
short var_24 = (short)10424;
long long int var_25 = 1772148152561226643LL;
unsigned char arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)131;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
