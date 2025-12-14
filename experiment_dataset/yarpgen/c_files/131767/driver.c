#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)(-127 - 1);
unsigned char var_4 = (unsigned char)216;
unsigned int var_6 = 2291137861U;
signed char var_7 = (signed char)76;
unsigned char var_11 = (unsigned char)60;
unsigned short var_12 = (unsigned short)43068;
int zero = 0;
unsigned char var_17 = (unsigned char)191;
unsigned long long int var_18 = 16419672071164399461ULL;
unsigned long long int var_19 = 4520604608398410798ULL;
void init() {
}

void checksum() {
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
