#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -667107038;
signed char var_1 = (signed char)-48;
signed char var_2 = (signed char)-11;
short var_4 = (short)25069;
long long int var_5 = 6803381805674288621LL;
unsigned char var_6 = (unsigned char)196;
short var_7 = (short)4641;
short var_9 = (short)3441;
int var_10 = 963803934;
unsigned char var_12 = (unsigned char)237;
unsigned char var_13 = (unsigned char)33;
unsigned long long int var_14 = 7314763000437381957ULL;
unsigned int var_15 = 625487602U;
int zero = 0;
unsigned char var_16 = (unsigned char)100;
unsigned short var_17 = (unsigned short)62163;
unsigned long long int var_18 = 5470049681993590633ULL;
unsigned char var_19 = (unsigned char)146;
unsigned short var_20 = (unsigned short)38983;
signed char var_21 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
