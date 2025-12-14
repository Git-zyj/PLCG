#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1375060374;
long long int var_1 = 7748413346482005914LL;
int var_3 = 794505036;
unsigned long long int var_4 = 14712658618190918732ULL;
short var_6 = (short)-4507;
short var_7 = (short)-4675;
int var_9 = -597405349;
int zero = 0;
unsigned short var_10 = (unsigned short)62141;
short var_11 = (short)-15425;
long long int var_12 = 177328375242564654LL;
short var_13 = (short)9818;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
