#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)44;
long long int var_3 = 4707437419662221603LL;
long long int var_5 = -1073917105147732808LL;
long long int var_7 = 6600452911537961318LL;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)56;
long long int var_14 = 8369627746891057505LL;
unsigned long long int var_15 = 4584659580987858357ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)487;
int var_17 = -1241007096;
unsigned char var_18 = (unsigned char)221;
int var_19 = -978125012;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
