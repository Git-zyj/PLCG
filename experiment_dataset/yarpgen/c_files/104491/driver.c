#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1565568580569100343LL;
short var_7 = (short)-5302;
long long int var_8 = 1116536992262192482LL;
int zero = 0;
int var_13 = -714549198;
unsigned long long int var_14 = 14551714518075968675ULL;
void init() {
}

void checksum() {
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
