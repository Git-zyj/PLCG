#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12357344518068905862ULL;
long long int var_1 = 7612543533499417315LL;
int var_2 = -28477956;
short var_5 = (short)-12208;
long long int var_8 = 3753693770216342951LL;
unsigned long long int var_9 = 2522356230112264471ULL;
long long int var_11 = -3047112134044915915LL;
int var_14 = 47744269;
unsigned long long int var_15 = 590873199588837741ULL;
int var_16 = -101096764;
int zero = 0;
unsigned short var_17 = (unsigned short)31075;
unsigned long long int var_18 = 18348798809281599031ULL;
long long int var_19 = 275556445718404058LL;
unsigned int var_20 = 3368524647U;
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
