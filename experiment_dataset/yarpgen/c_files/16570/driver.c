#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-25;
unsigned long long int var_2 = 3730644064604679938ULL;
signed char var_5 = (signed char)44;
long long int var_7 = 5008563271338345559LL;
long long int var_8 = -143395925005409479LL;
signed char var_9 = (signed char)-2;
int var_11 = -1555632736;
signed char var_12 = (signed char)-119;
unsigned char var_13 = (unsigned char)213;
short var_14 = (short)17139;
signed char var_17 = (signed char)-88;
int zero = 0;
unsigned char var_18 = (unsigned char)161;
short var_19 = (short)-20178;
void init() {
}

void checksum() {
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
