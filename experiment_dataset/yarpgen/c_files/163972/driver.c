#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57770;
unsigned char var_3 = (unsigned char)100;
unsigned long long int var_9 = 2958097527643169953ULL;
unsigned short var_10 = (unsigned short)22003;
unsigned long long int var_13 = 12105313792151573090ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)50;
int var_16 = -463365628;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
