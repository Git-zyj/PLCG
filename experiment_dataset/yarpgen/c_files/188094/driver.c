#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8161350224211138421ULL;
unsigned char var_3 = (unsigned char)113;
signed char var_7 = (signed char)-112;
long long int var_8 = -133732427537334294LL;
long long int var_9 = -4680654419727724404LL;
signed char var_11 = (signed char)5;
long long int var_12 = 7830429383257762515LL;
unsigned long long int var_13 = 10661941653940991050ULL;
long long int var_15 = -3496366715412278343LL;
int zero = 0;
signed char var_18 = (signed char)114;
unsigned long long int var_19 = 440898561610238033ULL;
long long int var_20 = -8383091752530146003LL;
long long int var_21 = -62266604073210745LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
