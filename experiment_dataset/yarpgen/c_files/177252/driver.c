#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11724553783150567068ULL;
int var_6 = -1771437665;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)26788;
unsigned short var_10 = (unsigned short)57043;
unsigned short var_13 = (unsigned short)61794;
int zero = 0;
unsigned char var_18 = (unsigned char)60;
int var_19 = -1820651875;
int var_20 = -44970576;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
