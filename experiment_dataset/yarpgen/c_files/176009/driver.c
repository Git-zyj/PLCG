#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1291486571U;
int var_3 = -1281480793;
unsigned long long int var_5 = 8389297545030566179ULL;
unsigned int var_7 = 1451349639U;
int var_8 = 1634510699;
unsigned short var_9 = (unsigned short)56815;
signed char var_10 = (signed char)-72;
unsigned short var_11 = (unsigned short)46590;
long long int var_13 = -5590995642532098952LL;
short var_15 = (short)-2633;
unsigned int var_16 = 2564649608U;
int zero = 0;
unsigned char var_17 = (unsigned char)75;
unsigned short var_18 = (unsigned short)57782;
unsigned short var_19 = (unsigned short)29566;
short var_20 = (short)-1458;
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
