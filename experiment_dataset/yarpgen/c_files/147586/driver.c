#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46510;
unsigned short var_3 = (unsigned short)55790;
short var_4 = (short)11265;
unsigned long long int var_6 = 3189969320860702394ULL;
int var_7 = 1869695304;
unsigned short var_8 = (unsigned short)40295;
unsigned int var_10 = 804754886U;
unsigned char var_11 = (unsigned char)37;
unsigned long long int var_13 = 4863668825670781373ULL;
int zero = 0;
signed char var_16 = (signed char)-52;
signed char var_17 = (signed char)93;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
