#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 466303231;
int var_1 = -1721841044;
int var_2 = -1092453027;
int var_3 = 761378654;
int var_4 = -831256695;
int var_5 = 336739429;
int var_6 = -1386156190;
unsigned char var_7 = (unsigned char)112;
int var_9 = 1762738106;
int zero = 0;
int var_10 = 470481264;
unsigned char var_11 = (unsigned char)208;
int var_12 = -432341830;
unsigned char var_13 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
