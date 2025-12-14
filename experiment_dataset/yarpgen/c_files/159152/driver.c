#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8187091824635486022ULL;
unsigned long long int var_1 = 7859035961328200276ULL;
unsigned int var_3 = 2898630580U;
unsigned int var_4 = 2063050451U;
short var_5 = (short)-25485;
short var_6 = (short)-22428;
unsigned int var_7 = 2939617705U;
long long int var_9 = -685337851044613865LL;
unsigned int var_10 = 2325652002U;
unsigned short var_11 = (unsigned short)60108;
unsigned int var_12 = 3841916578U;
int zero = 0;
long long int var_13 = -498836998240817876LL;
unsigned char var_14 = (unsigned char)238;
unsigned int var_15 = 3626981165U;
short var_16 = (short)30349;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
