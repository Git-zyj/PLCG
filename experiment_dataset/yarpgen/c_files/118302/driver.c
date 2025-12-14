#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)50;
unsigned short var_1 = (unsigned short)23660;
unsigned long long int var_2 = 16192562734838210510ULL;
unsigned long long int var_3 = 17800117331692758373ULL;
short var_4 = (short)-20628;
long long int var_5 = -8816555895817552825LL;
unsigned long long int var_6 = 14909963327092514190ULL;
int var_7 = -501533637;
unsigned char var_8 = (unsigned char)162;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 11401327648974965439ULL;
long long int var_11 = -7297977296001488067LL;
unsigned long long int var_12 = 18136908284101991704ULL;
unsigned short var_13 = (unsigned short)10317;
int zero = 0;
unsigned int var_14 = 2030091320U;
unsigned long long int var_15 = 2844610270099040808ULL;
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
