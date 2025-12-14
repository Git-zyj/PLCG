#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17220735405816685826ULL;
unsigned short var_2 = (unsigned short)4702;
long long int var_9 = -5899527217027922706LL;
long long int var_11 = -9200976466079320152LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)83;
signed char var_16 = (signed char)-120;
unsigned char var_17 = (unsigned char)68;
int zero = 0;
unsigned short var_20 = (unsigned short)31995;
unsigned short var_21 = (unsigned short)43656;
unsigned short var_22 = (unsigned short)60135;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
