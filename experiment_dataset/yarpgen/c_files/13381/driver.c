#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37430;
long long int var_1 = 6774854370093471890LL;
long long int var_4 = -156949656209487688LL;
int var_6 = 1259106059;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 15235429765908447089ULL;
int zero = 0;
int var_18 = -720057650;
short var_19 = (short)4577;
unsigned long long int var_20 = 827001178310536224ULL;
void init() {
}

void checksum() {
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
