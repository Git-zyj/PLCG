#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3410980589695424181LL;
unsigned char var_3 = (unsigned char)195;
unsigned long long int var_6 = 1257104647079679419ULL;
signed char var_7 = (signed char)-117;
unsigned char var_9 = (unsigned char)184;
unsigned long long int var_14 = 15409740819728412363ULL;
unsigned char var_17 = (unsigned char)27;
int zero = 0;
short var_18 = (short)-8554;
long long int var_19 = -707865679344476864LL;
unsigned short var_20 = (unsigned short)34858;
int var_21 = -283052492;
unsigned int var_22 = 4227675097U;
short var_23 = (short)-1864;
long long int var_24 = -4655241200703620579LL;
signed char arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-64;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
