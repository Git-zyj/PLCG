#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)204;
short var_4 = (short)-15393;
signed char var_7 = (signed char)-13;
unsigned long long int var_9 = 3437999601882789788ULL;
short var_10 = (short)-31572;
short var_11 = (short)-6462;
unsigned char var_12 = (unsigned char)153;
unsigned char var_13 = (unsigned char)82;
unsigned short var_15 = (unsigned short)59275;
unsigned short var_17 = (unsigned short)57083;
int zero = 0;
int var_18 = -1064266851;
short var_19 = (short)-15138;
short var_20 = (short)31126;
void init() {
}

void checksum() {
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
