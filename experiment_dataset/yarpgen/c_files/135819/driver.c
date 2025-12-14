#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58107;
short var_2 = (short)4829;
unsigned long long int var_3 = 8434962886401275843ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_6 = (short)27554;
unsigned long long int var_7 = 7595254509530648514ULL;
signed char var_8 = (signed char)85;
unsigned int var_9 = 1101621480U;
int var_10 = 1407819962;
int zero = 0;
int var_11 = -1970987196;
unsigned int var_12 = 1448077988U;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)214;
unsigned char var_15 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
