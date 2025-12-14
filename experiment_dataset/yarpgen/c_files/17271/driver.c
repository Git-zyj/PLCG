#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4741640937528590513LL;
long long int var_5 = 7644684040576661860LL;
long long int var_6 = 7603980973140713986LL;
int var_8 = 777059270;
int var_10 = -1078024931;
unsigned char var_11 = (unsigned char)245;
long long int var_12 = 4133160346594122884LL;
unsigned char var_13 = (unsigned char)144;
unsigned char var_14 = (unsigned char)73;
short var_15 = (short)-28697;
int zero = 0;
int var_17 = 401068327;
short var_18 = (short)12442;
void init() {
}

void checksum() {
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
