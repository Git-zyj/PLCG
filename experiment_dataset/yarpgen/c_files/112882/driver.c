#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41324;
int var_1 = 1593188878;
unsigned char var_2 = (unsigned char)126;
unsigned int var_3 = 3940806840U;
long long int var_6 = -8594240309205744592LL;
unsigned char var_8 = (unsigned char)238;
int var_9 = -1719496759;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 10421816446498949708ULL;
short var_13 = (short)-18588;
int zero = 0;
long long int var_14 = -1324206901940908994LL;
unsigned char var_15 = (unsigned char)123;
short var_16 = (short)26446;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
