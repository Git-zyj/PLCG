#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
long long int var_2 = 4728218332131998642LL;
unsigned char var_3 = (unsigned char)169;
long long int var_4 = 6942982900751786204LL;
_Bool var_5 = (_Bool)0;
long long int var_7 = -7468813284157129807LL;
long long int var_8 = -331815187029275267LL;
unsigned long long int var_9 = 543937322405008675ULL;
int zero = 0;
int var_11 = -1905453261;
unsigned short var_12 = (unsigned short)30021;
void init() {
}

void checksum() {
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
