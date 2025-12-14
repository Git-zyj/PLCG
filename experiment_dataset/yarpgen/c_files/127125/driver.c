#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2800710208428386112LL;
long long int var_3 = -4809273075666443004LL;
unsigned char var_11 = (unsigned char)128;
long long int var_16 = -1616702617764301588LL;
int zero = 0;
short var_19 = (short)-31329;
long long int var_20 = -1984283642744745913LL;
void init() {
}

void checksum() {
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
