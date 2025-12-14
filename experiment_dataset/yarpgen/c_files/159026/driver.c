#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9664028631823983564ULL;
signed char var_2 = (signed char)89;
short var_3 = (short)-19632;
int var_4 = 237683728;
unsigned char var_5 = (unsigned char)153;
unsigned char var_6 = (unsigned char)65;
short var_8 = (short)-12107;
unsigned char var_9 = (unsigned char)161;
unsigned short var_11 = (unsigned short)33516;
short var_12 = (short)21895;
unsigned short var_13 = (unsigned short)12422;
unsigned char var_14 = (unsigned char)25;
int zero = 0;
short var_15 = (short)-23468;
unsigned short var_16 = (unsigned short)11125;
unsigned long long int var_17 = 6225993962051668781ULL;
signed char var_18 = (signed char)-4;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
