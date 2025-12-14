#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8872583408813772495ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)61;
short var_14 = (short)-6821;
unsigned char var_15 = (unsigned char)222;
unsigned long long int var_16 = 7520934830160997059ULL;
int zero = 0;
unsigned long long int var_17 = 9707103376573922585ULL;
unsigned char var_18 = (unsigned char)244;
unsigned long long int var_19 = 17215405137120247537ULL;
unsigned long long int var_20 = 15692882867588206432ULL;
void init() {
}

void checksum() {
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
