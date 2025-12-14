#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 556412272;
unsigned long long int var_4 = 12990801198977723669ULL;
signed char var_5 = (signed char)78;
signed char var_6 = (signed char)-99;
int var_7 = -1221773294;
long long int var_12 = 443073930370136494LL;
signed char var_13 = (signed char)-18;
unsigned int var_14 = 356980653U;
int var_15 = -1203838525;
int zero = 0;
short var_16 = (short)-8907;
unsigned long long int var_17 = 13009744032893178548ULL;
int var_18 = 111805101;
unsigned long long int var_19 = 18133936064542550192ULL;
unsigned int var_20 = 741067255U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
