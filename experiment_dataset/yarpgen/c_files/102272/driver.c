#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-49;
int var_3 = -1153336101;
long long int var_4 = -6560436807323810538LL;
unsigned short var_5 = (unsigned short)19764;
long long int var_6 = 905043078417916309LL;
int zero = 0;
long long int var_10 = 8082432095233851465LL;
long long int var_11 = 6172802850448165928LL;
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
