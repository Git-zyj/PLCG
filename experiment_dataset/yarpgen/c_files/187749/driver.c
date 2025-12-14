#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14019;
long long int var_2 = 8609337171793381297LL;
unsigned long long int var_4 = 1025051611578511322ULL;
long long int var_6 = 4116699901075335270LL;
long long int var_8 = -3408053015722264985LL;
unsigned long long int var_13 = 9596615024007958962ULL;
long long int var_14 = -7879136433559422772LL;
int zero = 0;
int var_15 = 562664977;
unsigned short var_16 = (unsigned short)60964;
long long int var_17 = 6424161929802641683LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
