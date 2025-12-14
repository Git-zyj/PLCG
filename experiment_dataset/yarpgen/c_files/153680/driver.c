#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10681;
int var_3 = 1287018400;
unsigned long long int var_4 = 8663742005353257266ULL;
unsigned short var_5 = (unsigned short)12581;
unsigned short var_6 = (unsigned short)20229;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-26889;
int var_11 = 1237140927;
int zero = 0;
long long int var_12 = 104975934143158685LL;
int var_13 = 555136060;
int var_14 = -1322700833;
unsigned short var_15 = (unsigned short)32998;
void init() {
}

void checksum() {
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
