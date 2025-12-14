#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
int var_1 = -206690196;
unsigned int var_9 = 2102873310U;
short var_10 = (short)-30097;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-20169;
long long int var_13 = -5865407861205784456LL;
short var_14 = (short)-21440;
int var_18 = -193855313;
int zero = 0;
unsigned long long int var_20 = 7979564845928749841ULL;
unsigned long long int var_21 = 16100917805900119861ULL;
unsigned int var_22 = 678907296U;
void init() {
}

void checksum() {
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
