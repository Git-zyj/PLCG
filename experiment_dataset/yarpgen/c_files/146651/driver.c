#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5757413047808472566LL;
unsigned long long int var_1 = 548290787976166274ULL;
unsigned short var_3 = (unsigned short)44962;
unsigned short var_5 = (unsigned short)9131;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)40531;
short var_10 = (short)27705;
int zero = 0;
short var_11 = (short)32665;
unsigned short var_12 = (unsigned short)18666;
unsigned char var_13 = (unsigned char)140;
long long int var_14 = -2393700929825853174LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
