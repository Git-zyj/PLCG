#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11624;
unsigned char var_1 = (unsigned char)215;
unsigned int var_4 = 3799960476U;
long long int var_5 = 2345361985339169244LL;
unsigned short var_7 = (unsigned short)34374;
short var_9 = (short)-31060;
unsigned long long int var_10 = 17294355470499398876ULL;
unsigned char var_11 = (unsigned char)167;
unsigned char var_12 = (unsigned char)43;
unsigned int var_13 = 4258223653U;
unsigned long long int var_14 = 16528380796709498703ULL;
int var_15 = 1879878438;
int zero = 0;
signed char var_16 = (signed char)-31;
unsigned long long int var_17 = 18124042943246404780ULL;
long long int var_18 = 5464605842467518004LL;
unsigned long long int var_19 = 16495917443433773284ULL;
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
