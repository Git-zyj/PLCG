#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
unsigned short var_1 = (unsigned short)44070;
long long int var_2 = 195850884854256940LL;
unsigned long long int var_3 = 10992062742543573148ULL;
signed char var_4 = (signed char)-49;
unsigned int var_6 = 1730536961U;
signed char var_8 = (signed char)127;
int var_9 = -128651468;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 12169713198042240145ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)112;
short var_13 = (short)4222;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
