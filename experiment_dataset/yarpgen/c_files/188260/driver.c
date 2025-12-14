#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
unsigned short var_1 = (unsigned short)47360;
unsigned char var_2 = (unsigned char)72;
unsigned long long int var_5 = 13625398288989717588ULL;
signed char var_7 = (signed char)-93;
short var_11 = (short)16356;
int var_13 = -1657037571;
short var_15 = (short)-19424;
int var_16 = 983500332;
int var_18 = 1094266809;
int zero = 0;
unsigned short var_19 = (unsigned short)31894;
signed char var_20 = (signed char)-40;
unsigned long long int var_21 = 6116521304208952180ULL;
void init() {
}

void checksum() {
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
