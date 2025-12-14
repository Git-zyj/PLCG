#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44540;
unsigned short var_3 = (unsigned short)4279;
unsigned char var_5 = (unsigned char)84;
unsigned short var_6 = (unsigned short)31168;
signed char var_7 = (signed char)-23;
signed char var_8 = (signed char)-88;
long long int var_9 = 7725942554916106328LL;
unsigned short var_10 = (unsigned short)37333;
signed char var_11 = (signed char)35;
_Bool var_12 = (_Bool)0;
long long int var_14 = 4946779878949290816LL;
int zero = 0;
int var_16 = -928624158;
long long int var_17 = -3143315642440043615LL;
unsigned char var_18 = (unsigned char)68;
long long int var_19 = 9117733570243423700LL;
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
