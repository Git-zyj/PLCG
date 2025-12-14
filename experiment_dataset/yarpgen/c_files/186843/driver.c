#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4036420545327822688ULL;
short var_4 = (short)-21467;
unsigned char var_5 = (unsigned char)236;
long long int var_7 = -7555711815047564546LL;
int var_8 = -554127193;
long long int var_9 = -1181710518461758713LL;
int zero = 0;
int var_12 = 1080346014;
short var_13 = (short)15959;
short var_14 = (short)-25260;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
