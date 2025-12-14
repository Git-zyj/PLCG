#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2308661356400248015LL;
int var_5 = -104917440;
unsigned char var_6 = (unsigned char)208;
int var_8 = 189540279;
int zero = 0;
int var_12 = 1168314974;
unsigned short var_13 = (unsigned short)26679;
short var_14 = (short)-20454;
long long int var_15 = 4698103734885234560LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
