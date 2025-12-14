#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1472802890235538863LL;
short var_1 = (short)12676;
unsigned short var_3 = (unsigned short)33812;
int var_9 = 1436047781;
long long int var_11 = -1457517092704765206LL;
unsigned short var_15 = (unsigned short)27119;
unsigned short var_16 = (unsigned short)50407;
int zero = 0;
long long int var_17 = 3230098874358342299LL;
unsigned short var_18 = (unsigned short)9557;
short var_19 = (short)-16696;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
