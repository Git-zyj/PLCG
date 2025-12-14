#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3281;
unsigned char var_3 = (unsigned char)211;
unsigned short var_4 = (unsigned short)3723;
short var_7 = (short)21793;
int var_9 = -2080444874;
short var_11 = (short)-23965;
unsigned long long int var_12 = 8964608438351030571ULL;
unsigned long long int var_13 = 4704889938147100137ULL;
long long int var_14 = 3066540633311621736LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)-17403;
unsigned char var_18 = (unsigned char)185;
signed char var_19 = (signed char)-79;
unsigned int var_20 = 3105887957U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
