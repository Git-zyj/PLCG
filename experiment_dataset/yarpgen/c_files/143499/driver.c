#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
unsigned short var_1 = (unsigned short)31154;
signed char var_5 = (signed char)-78;
unsigned char var_6 = (unsigned char)98;
unsigned char var_8 = (unsigned char)67;
short var_9 = (short)30259;
unsigned int var_10 = 4142406485U;
int var_12 = -1396370975;
int var_13 = 1431311502;
int zero = 0;
short var_18 = (short)4713;
unsigned long long int var_19 = 8821998130669527464ULL;
unsigned long long int var_20 = 18300272297158686047ULL;
long long int var_21 = -1747119407014899606LL;
void init() {
}

void checksum() {
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
