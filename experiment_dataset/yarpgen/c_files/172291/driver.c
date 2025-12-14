#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18394784264975282950ULL;
unsigned long long int var_2 = 1181449657788298831ULL;
unsigned short var_3 = (unsigned short)62843;
unsigned char var_4 = (unsigned char)242;
long long int var_5 = -130971891181789466LL;
signed char var_6 = (signed char)-68;
signed char var_7 = (signed char)109;
unsigned long long int var_9 = 1041512944290047788ULL;
signed char var_10 = (signed char)86;
long long int var_14 = -4422260065327561765LL;
short var_15 = (short)26573;
short var_16 = (short)-25734;
signed char var_17 = (signed char)-5;
int var_19 = -1349195726;
int zero = 0;
long long int var_20 = 3082977867157227625LL;
long long int var_21 = 8612862889349496011LL;
unsigned short var_22 = (unsigned short)50806;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
