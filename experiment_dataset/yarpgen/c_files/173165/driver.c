#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11367;
signed char var_4 = (signed char)-47;
unsigned short var_5 = (unsigned short)33773;
long long int var_8 = -6676242663058356825LL;
unsigned long long int var_9 = 4161622571191902509ULL;
unsigned short var_10 = (unsigned short)35104;
int zero = 0;
long long int var_12 = 8474041570108265285LL;
unsigned short var_13 = (unsigned short)10789;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
