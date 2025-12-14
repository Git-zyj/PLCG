#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10109;
unsigned long long int var_3 = 5761381542527870615ULL;
long long int var_4 = -5763636282133067407LL;
unsigned char var_5 = (unsigned char)212;
unsigned short var_8 = (unsigned short)41374;
long long int var_9 = -3572466505516934082LL;
signed char var_10 = (signed char)-82;
short var_11 = (short)-1369;
int var_12 = 2102666573;
int var_13 = -1593431083;
int zero = 0;
unsigned char var_14 = (unsigned char)35;
int var_15 = 1120315352;
signed char var_16 = (signed char)-15;
unsigned short var_17 = (unsigned short)41870;
unsigned int var_18 = 844100800U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
