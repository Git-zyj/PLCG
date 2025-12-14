#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5826991471616580398LL;
unsigned char var_2 = (unsigned char)247;
unsigned long long int var_4 = 8386285072424334446ULL;
unsigned int var_7 = 724995401U;
long long int var_8 = 1340499028221613468LL;
short var_10 = (short)-20042;
short var_11 = (short)26861;
long long int var_13 = -7797694307237293435LL;
int zero = 0;
unsigned int var_14 = 770812139U;
unsigned long long int var_15 = 16838003614405967331ULL;
int var_16 = 152950155;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
