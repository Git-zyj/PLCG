#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6595843952998416614ULL;
unsigned long long int var_3 = 13736061231976523161ULL;
int var_4 = -1266493536;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_10 = (short)-11048;
unsigned long long int var_11 = 11491113515846358722ULL;
unsigned short var_12 = (unsigned short)2538;
unsigned char var_14 = (unsigned char)167;
unsigned long long int var_15 = 8793150156585791362ULL;
int var_16 = 1470117164;
int zero = 0;
signed char var_17 = (signed char)105;
unsigned long long int var_18 = 16190079877220905604ULL;
int var_19 = 1826708782;
unsigned short var_20 = (unsigned short)44251;
unsigned short var_21 = (unsigned short)14134;
unsigned long long int var_22 = 7129573818210586648ULL;
unsigned char var_23 = (unsigned char)155;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 7541872372178562389ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
