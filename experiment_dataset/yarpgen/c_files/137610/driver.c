#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)212;
int var_3 = -1697700601;
long long int var_5 = -3397969495093830964LL;
signed char var_6 = (signed char)29;
signed char var_8 = (signed char)93;
long long int var_9 = -173044689469163120LL;
unsigned char var_12 = (unsigned char)142;
long long int var_13 = 640815185358590677LL;
signed char var_15 = (signed char)-113;
unsigned long long int var_18 = 8968530825097377873ULL;
int zero = 0;
unsigned int var_19 = 3622839801U;
long long int var_20 = -5363042669164018400LL;
signed char var_21 = (signed char)24;
long long int var_22 = 5025043675095994420LL;
short var_23 = (short)-5559;
void init() {
}

void checksum() {
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
