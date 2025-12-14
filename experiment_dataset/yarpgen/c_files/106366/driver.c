#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26759;
short var_1 = (short)5165;
int var_2 = -573420654;
long long int var_5 = -4179520267518441088LL;
unsigned short var_6 = (unsigned short)29769;
unsigned char var_7 = (unsigned char)119;
short var_8 = (short)-11516;
short var_9 = (short)-12156;
int zero = 0;
int var_10 = 445371022;
unsigned char var_11 = (unsigned char)206;
long long int var_12 = 9176278461298709371LL;
unsigned char var_13 = (unsigned char)216;
int var_14 = -805114753;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
