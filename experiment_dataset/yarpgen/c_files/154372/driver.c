#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20485;
unsigned char var_3 = (unsigned char)108;
unsigned long long int var_4 = 866266349392571658ULL;
unsigned long long int var_5 = 15368949162910799679ULL;
int var_6 = -833247059;
short var_9 = (short)-4117;
unsigned short var_10 = (unsigned short)46645;
unsigned short var_12 = (unsigned short)49841;
int var_13 = -1847660125;
int zero = 0;
int var_14 = -1339531869;
unsigned short var_15 = (unsigned short)47106;
_Bool var_16 = (_Bool)1;
long long int var_17 = -8321181796757913325LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
