#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)121;
long long int var_7 = -6797709798466742870LL;
int var_9 = -18964014;
long long int var_11 = 7645018820276031274LL;
short var_12 = (short)-15148;
short var_15 = (short)19846;
short var_19 = (short)-2467;
int zero = 0;
unsigned short var_20 = (unsigned short)46617;
unsigned long long int var_21 = 7891536290501350949ULL;
unsigned short var_22 = (unsigned short)55550;
signed char var_23 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
