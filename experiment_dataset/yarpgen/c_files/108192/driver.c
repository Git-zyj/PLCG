#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)56748;
long long int var_4 = 9101574272213916366LL;
int var_6 = -1493166802;
long long int var_9 = -7469693021532846204LL;
long long int var_11 = 7432816253778187073LL;
unsigned short var_14 = (unsigned short)8982;
int zero = 0;
unsigned short var_16 = (unsigned short)57386;
unsigned short var_17 = (unsigned short)41144;
long long int var_18 = 5086079389753063325LL;
unsigned short var_19 = (unsigned short)30103;
unsigned int var_20 = 2930125766U;
unsigned short var_21 = (unsigned short)96;
unsigned int var_22 = 1818101258U;
long long int var_23 = -4083708821648676810LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
