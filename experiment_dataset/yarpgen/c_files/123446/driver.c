#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45764;
unsigned int var_2 = 2186753189U;
unsigned char var_6 = (unsigned char)15;
int var_7 = 1247658297;
unsigned long long int var_9 = 12336199158832093422ULL;
long long int var_10 = 5684046130843801491LL;
int zero = 0;
unsigned int var_13 = 2933994282U;
unsigned int var_14 = 3572818868U;
unsigned int var_15 = 66733344U;
int var_16 = -925179772;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
