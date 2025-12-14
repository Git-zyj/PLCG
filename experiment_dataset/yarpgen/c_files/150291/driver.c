#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
long long int var_3 = -2985763625569150697LL;
unsigned int var_4 = 2143394211U;
unsigned int var_9 = 656912154U;
int zero = 0;
unsigned short var_17 = (unsigned short)48388;
long long int var_18 = 615339365359315954LL;
long long int var_19 = -6146399900367620169LL;
int var_20 = 1638203851;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
