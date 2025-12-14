#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4411179703420739851LL;
long long int var_3 = -711136497925604438LL;
signed char var_5 = (signed char)34;
signed char var_8 = (signed char)-55;
int var_9 = 398408980;
unsigned short var_11 = (unsigned short)15886;
unsigned int var_16 = 1410445044U;
long long int var_17 = -5913755769546955017LL;
unsigned short var_18 = (unsigned short)47797;
int zero = 0;
long long int var_19 = 4848573308364998124LL;
int var_20 = -1004012365;
unsigned short var_21 = (unsigned short)43336;
void init() {
}

void checksum() {
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
