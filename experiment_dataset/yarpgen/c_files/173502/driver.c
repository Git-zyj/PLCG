#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)57;
int var_4 = 616374816;
int var_5 = 946121289;
long long int var_12 = -4332435830814561389LL;
unsigned long long int var_15 = 14942607022378354734ULL;
int zero = 0;
short var_20 = (short)-31970;
unsigned short var_21 = (unsigned short)61852;
void init() {
}

void checksum() {
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
