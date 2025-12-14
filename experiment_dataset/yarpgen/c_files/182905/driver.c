#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13371312331207807036ULL;
int var_5 = 406540294;
unsigned short var_9 = (unsigned short)15733;
int var_10 = 357360216;
unsigned short var_14 = (unsigned short)64084;
int zero = 0;
unsigned long long int var_19 = 16648317100587970314ULL;
unsigned short var_20 = (unsigned short)29656;
long long int var_21 = -849372217108864246LL;
unsigned short var_22 = (unsigned short)54400;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
