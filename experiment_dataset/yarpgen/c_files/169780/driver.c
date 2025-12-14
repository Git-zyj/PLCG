#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22958;
_Bool var_2 = (_Bool)1;
long long int var_3 = 7239357690706586954LL;
signed char var_4 = (signed char)-112;
unsigned int var_7 = 619367054U;
signed char var_8 = (signed char)-46;
long long int var_9 = 633194922540840466LL;
short var_10 = (short)6922;
unsigned short var_12 = (unsigned short)63624;
int zero = 0;
unsigned long long int var_13 = 5860982713756195913ULL;
long long int var_14 = -22484233056234828LL;
unsigned long long int var_15 = 2891489585910720797ULL;
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
