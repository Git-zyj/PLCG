#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21370;
long long int var_2 = -6196098967970082908LL;
unsigned long long int var_3 = 9091372144614994392ULL;
short var_4 = (short)22716;
long long int var_5 = -2835352126222733902LL;
unsigned long long int var_7 = 16608855304284411438ULL;
unsigned long long int var_9 = 15946115331253303802ULL;
unsigned short var_10 = (unsigned short)37161;
unsigned long long int var_11 = 8343228744921244279ULL;
unsigned short var_12 = (unsigned short)16698;
long long int var_13 = -6113461214105319870LL;
short var_14 = (short)15335;
int zero = 0;
int var_15 = 2076146972;
unsigned long long int var_16 = 5680531422558215273ULL;
short var_17 = (short)-11956;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
