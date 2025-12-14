#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 585067538575050052LL;
unsigned short var_7 = (unsigned short)41503;
unsigned short var_8 = (unsigned short)19680;
int zero = 0;
unsigned short var_10 = (unsigned short)19916;
signed char var_11 = (signed char)-121;
unsigned long long int var_12 = 15298198430555806555ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
