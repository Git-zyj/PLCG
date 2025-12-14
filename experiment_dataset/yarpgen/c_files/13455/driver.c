#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5277;
long long int var_3 = -8830008055958684435LL;
short var_4 = (short)12066;
long long int var_5 = -92219761555632872LL;
unsigned short var_6 = (unsigned short)59427;
unsigned long long int var_7 = 11861049588118307028ULL;
unsigned long long int var_8 = 5907823044346340362ULL;
unsigned char var_9 = (unsigned char)20;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)62275;
unsigned long long int var_13 = 10732559813808225219ULL;
int var_14 = -2071291906;
int var_15 = -2087111469;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
