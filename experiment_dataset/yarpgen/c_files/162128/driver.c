#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62126;
unsigned short var_2 = (unsigned short)964;
int var_3 = -1364594121;
unsigned int var_5 = 3616184797U;
unsigned short var_7 = (unsigned short)2930;
unsigned long long int var_8 = 1239905561038694576ULL;
int var_9 = -1739590097;
unsigned char var_10 = (unsigned char)159;
unsigned int var_13 = 4185678549U;
unsigned short var_14 = (unsigned short)41354;
signed char var_15 = (signed char)-57;
int zero = 0;
unsigned short var_17 = (unsigned short)41759;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 933760878222233369ULL;
unsigned long long int var_20 = 15166124968089661977ULL;
unsigned char var_21 = (unsigned char)14;
void init() {
}

void checksum() {
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
