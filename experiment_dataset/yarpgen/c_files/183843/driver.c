#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8529644651841081451LL;
long long int var_2 = -5441349618454644744LL;
int var_3 = -437551644;
int var_5 = 527513266;
unsigned int var_6 = 2731656369U;
unsigned char var_7 = (unsigned char)187;
long long int var_8 = 8084730724975481426LL;
long long int var_9 = 8365204839588146323LL;
unsigned int var_10 = 1049190722U;
int var_11 = -1253616314;
long long int var_12 = 3011712690824024372LL;
unsigned char var_13 = (unsigned char)201;
long long int var_14 = 8681869831209042056LL;
int zero = 0;
unsigned int var_15 = 281650105U;
unsigned int var_16 = 1430653210U;
unsigned char var_17 = (unsigned char)83;
unsigned char var_18 = (unsigned char)108;
unsigned int var_19 = 1354118966U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
