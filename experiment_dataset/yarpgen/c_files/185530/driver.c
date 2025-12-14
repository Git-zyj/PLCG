#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4990756200547751290LL;
unsigned long long int var_4 = 6925000459255373164ULL;
short var_5 = (short)2655;
int var_6 = 713175314;
long long int var_7 = -4899866400423961733LL;
unsigned long long int var_8 = 1404157647202087380ULL;
unsigned short var_9 = (unsigned short)18767;
short var_11 = (short)13997;
signed char var_12 = (signed char)-105;
unsigned short var_14 = (unsigned short)39724;
unsigned int var_16 = 3529026041U;
int zero = 0;
unsigned int var_18 = 358465809U;
long long int var_19 = 135066386636221763LL;
unsigned long long int var_20 = 5959484817787131964ULL;
short var_21 = (short)15684;
unsigned char var_22 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
