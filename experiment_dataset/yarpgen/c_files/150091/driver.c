#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4005826867979509829LL;
unsigned char var_3 = (unsigned char)220;
unsigned short var_6 = (unsigned short)28957;
short var_7 = (short)19332;
unsigned char var_11 = (unsigned char)212;
long long int var_12 = 5549384368229748630LL;
unsigned long long int var_13 = 8370812218023733231ULL;
int zero = 0;
unsigned long long int var_16 = 11915594599216455419ULL;
int var_17 = -339801879;
long long int var_18 = 1065110544381746541LL;
signed char var_19 = (signed char)20;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
