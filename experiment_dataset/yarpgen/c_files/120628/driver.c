#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4776644459967363143ULL;
long long int var_2 = -4065095473839880213LL;
unsigned long long int var_4 = 13906749672138057410ULL;
long long int var_5 = 4814153006885984020LL;
long long int var_7 = 4967594679986583420LL;
int zero = 0;
unsigned short var_10 = (unsigned short)31193;
long long int var_11 = 3049823605971728151LL;
short var_12 = (short)30109;
unsigned int var_13 = 2967875659U;
short var_14 = (short)3964;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
