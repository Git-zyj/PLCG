#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10765;
short var_3 = (short)-14361;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-98;
_Bool var_9 = (_Bool)0;
short var_12 = (short)13822;
long long int var_15 = 5261803441250432551LL;
short var_16 = (short)22432;
int zero = 0;
short var_17 = (short)-8897;
signed char var_18 = (signed char)105;
unsigned char var_19 = (unsigned char)226;
unsigned char var_20 = (unsigned char)190;
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
