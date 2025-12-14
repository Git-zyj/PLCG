#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1435204717;
short var_2 = (short)-25888;
unsigned short var_3 = (unsigned short)44572;
unsigned short var_5 = (unsigned short)56901;
unsigned long long int var_6 = 14984980172727384605ULL;
signed char var_7 = (signed char)-18;
long long int var_9 = -8502940753013840462LL;
unsigned char var_11 = (unsigned char)152;
int zero = 0;
long long int var_12 = 8729275727880447205LL;
unsigned short var_13 = (unsigned short)52796;
int var_14 = 1841979531;
int var_15 = -970322082;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
