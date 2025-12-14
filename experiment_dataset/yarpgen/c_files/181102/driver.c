#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -984430855;
int var_4 = 2037340730;
unsigned int var_6 = 9476320U;
short var_7 = (short)-30907;
short var_8 = (short)32696;
unsigned short var_9 = (unsigned short)40056;
unsigned long long int var_11 = 9359328777233740821ULL;
unsigned short var_13 = (unsigned short)51012;
int zero = 0;
unsigned short var_14 = (unsigned short)19632;
long long int var_15 = -8928210759105562334LL;
void init() {
}

void checksum() {
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
