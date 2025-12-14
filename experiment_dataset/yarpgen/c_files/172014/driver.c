#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 143778216;
short var_1 = (short)19208;
long long int var_6 = 810474132616836192LL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-80;
unsigned char var_17 = (unsigned char)68;
int var_18 = 965277789;
int zero = 0;
unsigned short var_19 = (unsigned short)15689;
unsigned int var_20 = 3990366042U;
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
