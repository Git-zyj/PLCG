#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1745818628;
unsigned long long int var_1 = 10291026696696947063ULL;
short var_2 = (short)24593;
unsigned char var_3 = (unsigned char)138;
unsigned long long int var_4 = 7256575983706423388ULL;
unsigned long long int var_5 = 16463219410655061019ULL;
unsigned long long int var_6 = 428570919210039336ULL;
long long int var_8 = -8653977094982674768LL;
short var_9 = (short)-24067;
unsigned long long int var_10 = 11298472860565727594ULL;
unsigned long long int var_11 = 15076665166418183782ULL;
unsigned long long int var_12 = 7251183993894059180ULL;
long long int var_13 = -2926845850650336995LL;
int var_14 = 1521761682;
short var_15 = (short)791;
int zero = 0;
short var_16 = (short)-4732;
int var_17 = 279042344;
unsigned char var_18 = (unsigned char)170;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
