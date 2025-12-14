#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3501074877955400877LL;
short var_3 = (short)1586;
long long int var_4 = -1771631688410627901LL;
long long int var_5 = 3076496109785542245LL;
long long int var_6 = -36065882981611455LL;
long long int var_7 = -3413768675935609614LL;
short var_9 = (short)17881;
long long int var_10 = -3663951548843353034LL;
short var_11 = (short)5153;
short var_12 = (short)-17685;
int zero = 0;
long long int var_13 = -4538866477737703783LL;
unsigned char var_14 = (unsigned char)199;
void init() {
}

void checksum() {
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
