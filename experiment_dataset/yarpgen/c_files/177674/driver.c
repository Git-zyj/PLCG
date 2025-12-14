#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7931501977927523755ULL;
unsigned long long int var_1 = 16426564498817457252ULL;
unsigned char var_2 = (unsigned char)117;
unsigned int var_3 = 823754238U;
unsigned int var_4 = 612953408U;
unsigned char var_5 = (unsigned char)203;
unsigned int var_6 = 2595237476U;
unsigned int var_7 = 1656908318U;
unsigned int var_8 = 3517907969U;
unsigned int var_9 = 2267952518U;
unsigned short var_10 = (unsigned short)17116;
unsigned int var_11 = 1028675558U;
unsigned int var_13 = 1759828384U;
int zero = 0;
unsigned int var_14 = 2507648508U;
unsigned int var_15 = 139122816U;
unsigned short var_16 = (unsigned short)43232;
unsigned int var_17 = 587886397U;
unsigned long long int var_18 = 14253224080091170758ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
