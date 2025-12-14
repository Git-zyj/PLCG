#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2566219588U;
int var_5 = 1526625656;
unsigned short var_9 = (unsigned short)31949;
unsigned char var_12 = (unsigned char)81;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 1710629063532824506LL;
int var_20 = -1850764755;
unsigned int var_21 = 2600250937U;
long long int var_22 = -1298355850445246772LL;
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
