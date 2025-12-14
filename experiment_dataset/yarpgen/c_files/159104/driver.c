#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 492303376;
_Bool var_4 = (_Bool)1;
long long int var_6 = 8682979952486777290LL;
unsigned short var_9 = (unsigned short)61047;
short var_12 = (short)25916;
int zero = 0;
long long int var_17 = 6760136809288467525LL;
unsigned char var_18 = (unsigned char)121;
long long int var_19 = 5285355381550017662LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
