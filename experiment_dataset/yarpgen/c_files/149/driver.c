#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
long long int var_1 = -4281611779077386968LL;
_Bool var_2 = (_Bool)1;
long long int var_3 = 4919206239177502630LL;
unsigned long long int var_4 = 4500959148605330888ULL;
unsigned short var_9 = (unsigned short)48402;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 40855595U;
short var_12 = (short)-4878;
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
