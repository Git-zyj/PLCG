#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26255;
unsigned int var_4 = 1709026U;
long long int var_7 = -8062392713498738576LL;
long long int var_8 = -5939773460598413821LL;
signed char var_10 = (signed char)-28;
long long int var_11 = -8663692834139970146LL;
long long int var_12 = 7977540558814962173LL;
int zero = 0;
short var_13 = (short)10198;
long long int var_14 = 3022140663011819416LL;
unsigned long long int var_15 = 5878864348540049453ULL;
unsigned char var_16 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
