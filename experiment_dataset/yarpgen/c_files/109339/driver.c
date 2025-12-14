#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
unsigned int var_5 = 1751717984U;
unsigned short var_6 = (unsigned short)10262;
long long int var_8 = -1605163262774055291LL;
unsigned int var_9 = 2794741641U;
long long int var_10 = -3846034022347403616LL;
unsigned short var_12 = (unsigned short)23880;
unsigned long long int var_14 = 6620671292804956734ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 2437119759024151552ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)57462;
unsigned char var_19 = (unsigned char)39;
unsigned long long int var_20 = 8441977608768200250ULL;
short var_21 = (short)22281;
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
