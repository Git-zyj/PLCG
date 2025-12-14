#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)2;
unsigned long long int var_2 = 4136037791238945785ULL;
unsigned int var_4 = 2355232214U;
unsigned char var_7 = (unsigned char)232;
unsigned long long int var_8 = 2944100464985420919ULL;
int var_9 = -565650440;
unsigned short var_11 = (unsigned short)13757;
int zero = 0;
unsigned long long int var_13 = 15752883879886972505ULL;
int var_14 = -1988532652;
int var_15 = 1144359934;
_Bool var_16 = (_Bool)1;
int var_17 = -503824279;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
