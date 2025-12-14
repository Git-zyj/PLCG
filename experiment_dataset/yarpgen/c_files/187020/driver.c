#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6093864861338268844ULL;
long long int var_1 = 669718533900916729LL;
int var_2 = -962203518;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)47;
unsigned char var_5 = (unsigned char)81;
long long int var_6 = -4843654086573095772LL;
short var_9 = (short)-26508;
unsigned long long int var_10 = 12862114366502279231ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)9404;
int var_14 = -2111398207;
unsigned short var_15 = (unsigned short)34684;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
