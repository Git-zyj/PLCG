#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5752460086502935569LL;
signed char var_1 = (signed char)26;
signed char var_2 = (signed char)8;
long long int var_3 = 600639742111077367LL;
long long int var_4 = 766316692917762137LL;
long long int var_7 = -3687437899435517900LL;
unsigned int var_9 = 4237842032U;
unsigned char var_10 = (unsigned char)63;
unsigned char var_11 = (unsigned char)204;
unsigned int var_13 = 830432992U;
signed char var_14 = (signed char)17;
unsigned long long int var_18 = 1534176652016485688ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 419526948U;
signed char var_22 = (signed char)-12;
unsigned short var_23 = (unsigned short)20108;
unsigned char var_24 = (unsigned char)212;
long long int var_25 = 758429759080094686LL;
unsigned short var_26 = (unsigned short)57253;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
