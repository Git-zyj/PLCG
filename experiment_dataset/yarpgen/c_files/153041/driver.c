#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)41;
unsigned long long int var_1 = 9009751056804036959ULL;
int var_2 = -1364257969;
signed char var_3 = (signed char)63;
short var_4 = (short)18240;
signed char var_5 = (signed char)36;
signed char var_6 = (signed char)-99;
signed char var_7 = (signed char)105;
long long int var_9 = -8401988046810069074LL;
signed char var_10 = (signed char)-98;
unsigned int var_13 = 2209299910U;
unsigned char var_14 = (unsigned char)229;
unsigned char var_16 = (unsigned char)150;
int zero = 0;
unsigned int var_18 = 3027974872U;
int var_19 = -1387309480;
unsigned short var_20 = (unsigned short)14330;
void init() {
}

void checksum() {
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
