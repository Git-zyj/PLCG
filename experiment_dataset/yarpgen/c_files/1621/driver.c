#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1458937663;
long long int var_2 = -7812836552913858595LL;
unsigned short var_4 = (unsigned short)54940;
unsigned char var_5 = (unsigned char)142;
unsigned short var_6 = (unsigned short)40361;
long long int var_8 = -4034240339912289301LL;
unsigned char var_9 = (unsigned char)100;
int zero = 0;
unsigned short var_10 = (unsigned short)21356;
unsigned long long int var_11 = 7576126455112258483ULL;
long long int var_12 = -7619581306347290396LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
