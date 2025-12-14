#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8090742093746294498ULL;
unsigned short var_3 = (unsigned short)22847;
unsigned char var_4 = (unsigned char)183;
int var_7 = -1185124711;
unsigned long long int var_11 = 7024053178669461072ULL;
unsigned long long int var_13 = 6101274692636575496ULL;
int zero = 0;
long long int var_20 = -5555017303857054570LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
