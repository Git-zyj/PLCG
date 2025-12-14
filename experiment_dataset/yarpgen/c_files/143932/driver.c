#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 254599063U;
unsigned int var_2 = 3254165905U;
int var_3 = 64364600;
signed char var_4 = (signed char)94;
unsigned char var_5 = (unsigned char)188;
long long int var_6 = 5681043693412390515LL;
long long int var_7 = -122537886524240249LL;
unsigned int var_8 = 3508552344U;
short var_9 = (short)1048;
int zero = 0;
unsigned short var_10 = (unsigned short)14463;
signed char var_11 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
